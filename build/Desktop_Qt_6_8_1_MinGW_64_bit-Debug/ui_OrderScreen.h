/********************************************************************************
** Form generated from reading UI file 'OrderScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSCREEN_H
#define UI_ORDERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderScreen
{
public:
    QLabel *label;
    QTableWidget *orderTable;
    QLineEdit *totalAmountInput;
    QLabel *label_2;
    QPushButton *checkoutButton;
    QLineEdit *addressInput;

    void setupUi(QDialog *OrderScreen)
    {
        if (OrderScreen->objectName().isEmpty())
            OrderScreen->setObjectName("OrderScreen");
        OrderScreen->resize(641, 412);
        label = new QLabel(OrderScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 80, 91, 16));
        orderTable = new QTableWidget(OrderScreen);
        if (orderTable->columnCount() < 5)
            orderTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        orderTable->setObjectName("orderTable");
        orderTable->setGeometry(QRect(20, 130, 601, 192));
        orderTable->horizontalHeader()->setDefaultSectionSize(118);
        totalAmountInput = new QLineEdit(OrderScreen);
        totalAmountInput->setObjectName("totalAmountInput");
        totalAmountInput->setGeometry(QRect(470, 320, 151, 24));
        totalAmountInput->setReadOnly(true);
        label_2 = new QLabel(OrderScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 320, 91, 16));
        checkoutButton = new QPushButton(OrderScreen);
        checkoutButton->setObjectName("checkoutButton");
        checkoutButton->setGeometry(QRect(540, 360, 80, 24));
        addressInput = new QLineEdit(OrderScreen);
        addressInput->setObjectName("addressInput");
        addressInput->setGeometry(QRect(200, 80, 421, 24));

        retranslateUi(OrderScreen);

        QMetaObject::connectSlotsByName(OrderScreen);
    } // setupUi

    void retranslateUi(QDialog *OrderScreen)
    {
        OrderScreen->setWindowTitle(QCoreApplication::translate("OrderScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("OrderScreen", "Shipping Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OrderScreen", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OrderScreen", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OrderScreen", "Product Price / Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("OrderScreen", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = orderTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("OrderScreen", "Total Price", nullptr));
        label_2->setText(QCoreApplication::translate("OrderScreen", "Total Amount", nullptr));
        checkoutButton->setText(QCoreApplication::translate("OrderScreen", "Place order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderScreen: public Ui_OrderScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCREEN_H
