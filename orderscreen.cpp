#include "orderscreen.h"
#include "ui_OrderScreen.h"

#include <QWidget>
#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QByteArray>
#include <QJsonDocument>
#include <QMessageBox>
#include <QJsonArray>
#include <QJsonObject>
#include <QTableWidgetItem>
#include <QSettings>

OrderScreen::OrderScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderScreen)
{
    ui->setupUi(this);

    fetchCartItems();

    connect(ui->checkoutButton, &QPushButton::clicked, this, &OrderScreen::on_checkoutButton_clicked);
}

OrderScreen::~OrderScreen()
{
    delete ui;
}

void OrderScreen::fetchCartItems()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://localhost:5000/api/cart"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QJsonDocument doc = QJsonDocument::fromJson(responseData);

            cart = doc.object();
            displayCartItems(cart);
        } else {
            QMessageBox::warning(this, "Error", "Failed to fetch cart items.");
        }
        reply->deleteLater();
    });
}

void OrderScreen::displayCartItems(const QJsonObject &responseObj)
{
    QJsonArray cartItems = responseObj["cartItems"].toArray();
    int totalAmount = responseObj["totalAmount"].toInt();
    cartId = cartItems[0].toObject()["cartId"].toInt();

    ui->orderTable->setRowCount(0);
    int row = 0;

    for (const QJsonValue &value : cartItems) {
        QJsonObject cartItemObj = value.toObject();

        int productId = cartItemObj["product"].toObject()["id"].toInt();
        QString productName = cartItemObj["product"].toObject()["name"].toString();
        int pricePerPiece = cartItemObj["product"].toObject()["price"].toInt();
        int quantity = cartItemObj["quantity"].toInt();
        totalPrice = cartItemObj["price"].toInt();

        ui->orderTable->insertRow(row);

        ui->orderTable->setItem(row, 0, new QTableWidgetItem(QString::number(productId)));
        ui->orderTable->setItem(row, 1, new QTableWidgetItem(productName));
        ui->orderTable->setItem(row, 2, new QTableWidgetItem(QString::number(pricePerPiece)));
        ui->orderTable->setItem(row, 3, new QTableWidgetItem(QString::number(quantity)));
        ui->orderTable->setItem(row, 4, new QTableWidgetItem(QString::number(totalPrice)));

        row++;
    }

    ui->totalAmountInput->setText(QString::number(totalAmount));
}

void OrderScreen::on_checkoutButton_clicked()
{
    QString address = ui->addressInput->text();

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://localhost:5000/api/checkout"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["shippingAddress"] = address;
    json["totalAmount"] = totalPrice;
    json["cartId"] = cartId;

    QJsonDocument doc(json);
    QByteArray data = doc.toJson();

    QNetworkReply *reply = manager->post(request, data);
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QMessageBox::information(this, "Checkout Successful", "Order placed successfully!");
            this->close();
        } else {
            QMessageBox::warning(this, "Error", "Checkout failed! Visit logs for more details.");
        }
        reply->deleteLater();
    });
}
