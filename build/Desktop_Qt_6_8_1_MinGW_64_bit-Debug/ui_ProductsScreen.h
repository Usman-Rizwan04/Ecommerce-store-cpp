/********************************************************************************
** Form generated from reading UI file 'ProductsScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSSCREEN_H
#define UI_PRODUCTSSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductsScreen
{
public:
    QTableWidget *productsTable;
    QPushButton *cartButton;
    QPushButton *backButton;
    QLabel *label;

    void setupUi(QDialog *ProductsScreen)
    {
        if (ProductsScreen->objectName().isEmpty())
            ProductsScreen->setObjectName("ProductsScreen");
        ProductsScreen->resize(824, 427);
        productsTable = new QTableWidget(ProductsScreen);
        if (productsTable->columnCount() < 6)
            productsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QString::fromUtf8("Product code"));
        productsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        productsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        productsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        productsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        productsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        productsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        productsTable->setObjectName("productsTable");
        productsTable->setGeometry(QRect(20, 70, 681, 261));
        productsTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        productsTable->setAlternatingRowColors(false);
        productsTable->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);
        productsTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        productsTable->horizontalHeader()->setMinimumSectionSize(28);
        productsTable->horizontalHeader()->setDefaultSectionSize(112);
        cartButton = new QPushButton(ProductsScreen);
        cartButton->setObjectName("cartButton");
        cartButton->setGeometry(QRect(530, 370, 80, 24));
        backButton = new QPushButton(ProductsScreen);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(630, 370, 80, 24));
        label = new QLabel(ProductsScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 281, 16));
        QFont font;
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        retranslateUi(ProductsScreen);

        QMetaObject::connectSlotsByName(ProductsScreen);
    } // setupUi

    void retranslateUi(QDialog *ProductsScreen)
    {
        ProductsScreen->setWindowTitle(QCoreApplication::translate("ProductsScreen", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = productsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ProductsScreen", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = productsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ProductsScreen", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = productsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ProductsScreen", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = productsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ProductsScreen", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = productsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ProductsScreen", "Quantity", nullptr));
        cartButton->setText(QCoreApplication::translate("ProductsScreen", "Add to cart", nullptr));
        backButton->setText(QCoreApplication::translate("ProductsScreen", "Back", nullptr));
        label->setText(QCoreApplication::translate("ProductsScreen", "*Only the selected products will be added to the cart.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductsScreen: public Ui_ProductsScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSSCREEN_H
