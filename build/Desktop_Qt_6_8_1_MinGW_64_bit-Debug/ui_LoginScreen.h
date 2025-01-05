/********************************************************************************
** Form generated from reading UI file 'LoginScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QFrame *frame;
    QPushButton *loginButton;
    QLineEdit *passwordInput;
    QLineEdit *emailInput;
    QFrame *frame_2;
    QLabel *label;
    QPushButton *backButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName("LoginScreen");
        LoginScreen->resize(406, 336);
        frame = new QFrame(LoginScreen);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 431, 361));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(150, 260, 80, 24));
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        passwordInput = new QLineEdit(frame);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(130, 190, 221, 24));
        passwordInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        emailInput = new QLineEdit(frame);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(130, 130, 221, 24));
        emailInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 431, 80));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 89);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        backButton = new QPushButton(frame_2);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(310, 30, 80, 24));
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 130, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 190, 61, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QCoreApplication::translate("LoginScreen", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginScreen", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginScreen", "Login", nullptr));
        backButton->setText(QCoreApplication::translate("LoginScreen", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("LoginScreen", "Email : ", nullptr));
        label_3->setText(QCoreApplication::translate("LoginScreen", "Password : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
