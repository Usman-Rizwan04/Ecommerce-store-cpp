/********************************************************************************
** Form generated from reading UI file 'SignupScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPSCREEN_H
#define UI_SIGNUPSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignupScreen
{
public:
    QLineEdit *nameInput;
    QLineEdit *emailInput;
    QLineEdit *passwordInput;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *signupButton;
    QPushButton *backButton;

    void setupUi(QDialog *SignupScreen)
    {
        if (SignupScreen->objectName().isEmpty())
            SignupScreen->setObjectName("SignupScreen");
        SignupScreen->resize(511, 334);
        nameInput = new QLineEdit(SignupScreen);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(220, 30, 141, 24));
        emailInput = new QLineEdit(SignupScreen);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(220, 60, 141, 24));
        passwordInput = new QLineEdit(SignupScreen);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(220, 90, 141, 24));
        label = new QLabel(SignupScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 49, 16));
        label_2 = new QLabel(SignupScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 60, 49, 16));
        label_3 = new QLabel(SignupScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 90, 61, 16));
        signupButton = new QPushButton(SignupScreen);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(70, 180, 80, 24));
        backButton = new QPushButton(SignupScreen);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(210, 180, 80, 24));

        retranslateUi(SignupScreen);

        QMetaObject::connectSlotsByName(SignupScreen);
    } // setupUi

    void retranslateUi(QDialog *SignupScreen)
    {
        SignupScreen->setWindowTitle(QCoreApplication::translate("SignupScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignupScreen", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("SignupScreen", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("SignupScreen", "Password", nullptr));
        signupButton->setText(QCoreApplication::translate("SignupScreen", "Signup", nullptr));
        backButton->setText(QCoreApplication::translate("SignupScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupScreen: public Ui_SignupScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPSCREEN_H
