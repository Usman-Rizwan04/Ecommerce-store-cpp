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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderScreen
{
public:
    QFrame *frame;
    QPushButton *checkoutButton;
    QLineEdit *totalAmountInput;
    QLabel *label_2;
    QTableWidget *orderTable;
    QLineEdit *addressInput;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *OrderScreen)
    {
        if (OrderScreen->objectName().isEmpty())
            OrderScreen->setObjectName("OrderScreen");
        OrderScreen->resize(1161, 711);
        frame = new QFrame(OrderScreen);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1161, 711));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        checkoutButton = new QPushButton(frame);
        checkoutButton->setObjectName("checkoutButton");
        checkoutButton->setGeometry(QRect(950, 610, 121, 41));
        QFont font;
        font.setPointSize(11);
        checkoutButton->setFont(font);
        checkoutButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        totalAmountInput = new QLineEdit(frame);
        totalAmountInput->setObjectName("totalAmountInput");
        totalAmountInput->setGeometry(QRect(850, 530, 161, 41));
        totalAmountInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        totalAmountInput->setReadOnly(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(730, 530, 111, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        orderTable = new QTableWidget(frame);
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
        orderTable->setGeometry(QRect(130, 150, 881, 221));
        orderTable->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        orderTable->horizontalHeader()->setDefaultSectionSize(118);
        addressInput = new QLineEdit(frame);
        addressInput->setObjectName("addressInput");
        addressInput->setGeometry(QRect(270, 420, 621, 24));
        addressInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 420, 111, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 1161, 80));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 89);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 20, 261, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(28);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 71, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/CC/Downloads/pngfind.com-grocery-cart-png-6292805.png")));
        label_4->setScaledContents(true);

        retranslateUi(OrderScreen);

        QMetaObject::connectSlotsByName(OrderScreen);
    } // setupUi

    void retranslateUi(QDialog *OrderScreen)
    {
        OrderScreen->setWindowTitle(QCoreApplication::translate("OrderScreen", "Dialog", nullptr));
        checkoutButton->setText(QCoreApplication::translate("OrderScreen", "Place order", nullptr));
        label_2->setText(QCoreApplication::translate("OrderScreen", "Total Amount : ", nullptr));
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
        label->setText(QCoreApplication::translate("OrderScreen", "Shipping Address : ", nullptr));
        label_3->setText(QCoreApplication::translate("OrderScreen", "Order Screen", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrderScreen: public Ui_OrderScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCREEN_H
