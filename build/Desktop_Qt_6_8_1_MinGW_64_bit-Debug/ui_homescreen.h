/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *lbl_image;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName("HomeScreen");
        HomeScreen->resize(1154, 711);
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1161, 711));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lbl_image = new QLabel(frame);
        lbl_image->setObjectName("lbl_image");
        lbl_image->setGeometry(QRect(650, 320, 461, 301));
        lbl_image->setPixmap(QPixmap(QString::fromUtf8("C:/Users/CC/Downloads/\342\200\224Pngtree\342\200\224plain t-shirt with a lot_4888759.png")));
        lbl_image->setScaledContents(true);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(160, 520, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        signupButton = new QPushButton(frame);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(330, 520, 91, 31));
        signupButton->setFont(font);
        signupButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 1161, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 89);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 10, 601, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(36);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 170, 601, 161));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sylfaen")});
        font2.setPointSize(28);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setTextFormat(Qt::TextFormat::AutoText);
        frame_2->raise();
        lbl_image->raise();
        loginButton->raise();
        signupButton->raise();
        label_2->raise();
        HomeScreen->setCentralWidget(centralwidget);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "HomeScreen", nullptr));
        lbl_image->setText(QString());
        loginButton->setText(QCoreApplication::translate("HomeScreen", "LOGIN", nullptr));
        signupButton->setText(QCoreApplication::translate("HomeScreen", "SIGNUP", nullptr));
        label->setText(QCoreApplication::translate("HomeScreen", "Welcome To T-Shirt Store", nullptr));
        label_2->setText(QCoreApplication::translate("HomeScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Discover premium-quality T-shirts that blend comfort</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">and style. From classic basics to trendy graphic designs,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right"
                        ":0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">we\342\200\231ve got something for everyone. Shop now and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">elevate your wardrobe with our versatile collection</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
