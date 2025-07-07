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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductsScreen
{
public:
    QFrame *frame;
    QPushButton *cartButton;
    QTableWidget *productsTable;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *backButton;
    QLabel *label_3;

    void setupUi(QDialog *ProductsScreen)
    {
        if (ProductsScreen->objectName().isEmpty())
            ProductsScreen->setObjectName("ProductsScreen");
        ProductsScreen->resize(1161, 711);
        frame = new QFrame(ProductsScreen);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1161, 711));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        cartButton = new QPushButton(frame);
        cartButton->setObjectName("cartButton");
        cartButton->setGeometry(QRect(950, 610, 121, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        cartButton->setFont(font);
        cartButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        productsTable = new QTableWidget(frame);
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
        productsTable->setGeometry(QRect(210, 160, 711, 411));
        productsTable->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);"));
        productsTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        productsTable->setAlternatingRowColors(false);
        productsTable->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);
        productsTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        productsTable->horizontalHeader()->setMinimumSectionSize(28);
        productsTable->horizontalHeader()->setDefaultSectionSize(112);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 140, 281, 16));
        QFont font1;
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 1161, 80));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 89);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 20, 171, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell")});
        font2.setPointSize(28);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        backButton = new QPushButton(frame_2);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1050, 30, 81, 31));
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 51, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/CC/Downloads/pngfind.com-package-png-1312918.png")));
        label_3->setScaledContents(true);

        retranslateUi(ProductsScreen);

        QMetaObject::connectSlotsByName(ProductsScreen);
    } // setupUi

    void retranslateUi(QDialog *ProductsScreen)
    {
        ProductsScreen->setWindowTitle(QCoreApplication::translate("ProductsScreen", "Dialog", nullptr));
        cartButton->setText(QCoreApplication::translate("ProductsScreen", "Add to cart", nullptr));
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
        label->setText(QCoreApplication::translate("ProductsScreen", "*Only the selected products will be added to the cart.", nullptr));
        label_2->setText(QCoreApplication::translate("ProductsScreen", "Products", nullptr));
        backButton->setText(QCoreApplication::translate("ProductsScreen", "Back", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProductsScreen: public Ui_ProductsScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSSCREEN_H
