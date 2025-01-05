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

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName("HomeScreen");
        HomeScreen->resize(678, 538);
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 681, 541));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lbl_image = new QLabel(frame);
        lbl_image->setObjectName("lbl_image");
        lbl_image->setGeometry(QRect(170, 160, 331, 221));
        lbl_image->setPixmap(QPixmap(QString::fromUtf8("C:/Users/CC/Downloads/\342\200\224Pngtree\342\200\224plain t-shirt with a lot_4888759.png")));
        lbl_image->setScaledContents(true);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(170, 440, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        signupButton = new QPushButton(frame);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(420, 440, 91, 31));
        signupButton->setFont(font);
        signupButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 681, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 89);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 601, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(36);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_2->raise();
        lbl_image->raise();
        loginButton->raise();
        signupButton->raise();
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
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
