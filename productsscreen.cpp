#include "productsscreen.h"
#include "ui_ProductsScreen.h"
#include "homescreen.h"
#include "orderscreen.h"

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QListWidgetItem>
#include <QSpinBox>
#include <QSet>

ProductsScreen::ProductsScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductsScreen) {
    ui->setupUi(this);
    orderScreen = nullptr;

    fetchProducts();
    
    // connect(ui->productsTable, &QTableWidget::itemSelectionChanged, this, &ProductsScreen::onRowSelected);
    // connect(ui->productsTable->selectionModel(), &QItemSelectionModel::selectionChanged, this, &ProductsScreen::onRowDeselected);
}

ProductsScreen::~ProductsScreen()
{
    delete ui;
}


void ProductsScreen::fetchProducts()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://localhost:5000/api/product"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QJsonDocument doc = QJsonDocument::fromJson(responseData);
            products = doc.array();

            displayProducts(products);
        } else {
            QMessageBox::warning(this, "Error", "Failed to fetch products.");
        }
        reply->deleteLater();
    });
}

void ProductsScreen::displayProducts(const QJsonArray &products)
{
    ui->productsTable->setRowCount(0);
    int row = 0;
    
    for (const QJsonValue &value : products) {
        QJsonObject productObj = value.toObject();

        QString productId = QString::number(productObj["id"].toInt());
        QString productName = productObj["name"].toString();
        QString productDescription = productObj["description"].toString();
        QString productCategory = productObj["category"].toString();
        QString productPrice = QString::number(productObj["price"].toInt());
        
        QSpinBox *spinBox = new QSpinBox();
        spinBox->setMinimum(0);
        spinBox->setValue(0);
        
        ui->productsTable->insertRow(row);
        
        ui->productsTable->setItem(row, 0, new QTableWidgetItem(productId));
        ui->productsTable->setItem(row, 1, new QTableWidgetItem(productName));
        ui->productsTable->setItem(row, 2, new QTableWidgetItem(productDescription));
        ui->productsTable->setItem(row, 3, new QTableWidgetItem(productCategory));
        ui->productsTable->setItem(row, 4, new QTableWidgetItem(productPrice));
        ui->productsTable->setCellWidget(row, 5, spinBox);
        
        row++;
    }
}

void ProductsScreen::on_cartButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Action","Once added, products cannot be modified. Are you sure, you want to proceed?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) return;
    
    QList<QTableWidgetItem *> selectedItems = ui->productsTable->selectedItems();
    QSet<int> uniqueRows;
    
    for (QTableWidgetItem *item : selectedItems) {
        int row = ui->productsTable->row(item);
        uniqueRows.insert(row);
    }
    
    if (uniqueRows.size() > 0) {
        QJsonArray productsArray;
        for (int row : uniqueRows) {
            QSpinBox *spinBox = qobject_cast<QSpinBox *>(ui->productsTable->cellWidget(row, 5));
            
            if (spinBox) {
                int value = spinBox->value();
                if (value == 0) {
                    QMessageBox::warning(this, "Error", "Please make sure all selected products have a quantity of at least 1");
                    return;
                } else {
                    QJsonObject product;
                    product["productId"] = ui->productsTable->item(row, 0)->text().toInt();
                    product["quantity"] = value;
                    productsArray.append(product);
                }
            }
        }
        addProductsToCart(productsArray);
    } else {
        QMessageBox::warning(this, "No Product Added", "Please add at least one product by selecting");
    }
}

void ProductsScreen::addProductsToCart(QJsonArray productsArray)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://localhost:5000/api/cart"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    
    QJsonDocument doc;
    doc.setArray(productsArray);
    QByteArray data = doc.toJson();

    QNetworkReply *reply = manager->post(request, data);
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QMessageBox::information(this, "Product Added", "The product has been added to your cart.");

            if (!orderScreen) {
                orderScreen = new OrderScreen();
            }
            orderScreen->show();
            this->close();
        } else {
            QMessageBox::warning(this, "Error", "Failed to add product to cart. Visit logs for more details");
        }
        reply->deleteLater();
    });
}

// void ProductsScreen::onRowSelected() {
//     QList<QTableWidgetItem *> selectedItems = ui->productsTable->selectedItems();
//     if (!selectedItems.isEmpty()) {
//         // Get the row index of the selected item
//         int row = selectedItems.first()->row();
//         qDebug() << "Selected Row:" << row;

//         // Do something with the selected row, for example, retrieve data:
//         QString selectedProductId = ui->productsTable->item(row, 0)->text();
//         QString selectedProductName = ui->productsTable->item(row, 1)->text();
//         qDebug() << "Selected Product ID:" << selectedProductId << "Name:" << selectedProductName;
//     }
// }

void ProductsScreen::on_backButton_clicked(){
    HomeScreen *homeScreen = new HomeScreen();
    homeScreen->show();
    this->close();
}
