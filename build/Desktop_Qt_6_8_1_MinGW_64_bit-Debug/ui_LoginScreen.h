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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QLineEdit *emailInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QPushButton *backButton;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName("LoginScreen");
        LoginScreen->resize(400, 300);
        emailInput = new QLineEdit(LoginScreen);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(120, 50, 191, 24));
        passwordInput = new QLineEdit(LoginScreen);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(120, 90, 191, 24));
        loginButton = new QPushButton(LoginScreen);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(70, 160, 80, 24));
        backButton = new QPushButton(LoginScreen);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(210, 160, 80, 24));

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QCoreApplication::translate("LoginScreen", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginScreen", "Login", nullptr));
        backButton->setText(QCoreApplication::translate("LoginScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
