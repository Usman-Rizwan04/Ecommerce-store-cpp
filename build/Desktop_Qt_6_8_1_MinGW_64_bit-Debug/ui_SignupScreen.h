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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignupScreen
{
public:
    QFrame *frame;
    QPushButton *signupButton;
    QLabel *label_3;
    QLineEdit *passwordInput;
    QLabel *label_2;
    QLineEdit *emailInput;
    QLabel *label;
    QLineEdit *nameInput;
    QFrame *frame_2;
    QPushButton *backButton;
    QLabel *label_4;

    void setupUi(QDialog *SignupScreen)
    {
        if (SignupScreen->objectName().isEmpty())
            SignupScreen->setObjectName("SignupScreen");
        SignupScreen->resize(511, 334);
        frame = new QFrame(SignupScreen);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 511, 341));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        signupButton = new QPushButton(frame);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(230, 270, 80, 24));
        signupButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 210, 61, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        passwordInput = new QLineEdit(frame);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(200, 210, 181, 24));
        passwordInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 170, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        emailInput = new QLineEdit(frame);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(200, 170, 181, 24));
        emailInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 130, 49, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        nameInput = new QLineEdit(frame);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(200, 130, 181, 24));
        nameInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(209, 209, 209);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 511, 80));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 36, 89\n"
");"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        backButton = new QPushButton(frame_2);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(410, 30, 80, 24));
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
"background-color: rgb(200, 223, 255);"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 151, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(28);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(SignupScreen);

        QMetaObject::connectSlotsByName(SignupScreen);
    } // setupUi

    void retranslateUi(QDialog *SignupScreen)
    {
        SignupScreen->setWindowTitle(QCoreApplication::translate("SignupScreen", "Dialog", nullptr));
        signupButton->setText(QCoreApplication::translate("SignupScreen", "Signup", nullptr));
        label_3->setText(QCoreApplication::translate("SignupScreen", "Password : ", nullptr));
        label_2->setText(QCoreApplication::translate("SignupScreen", "Email : ", nullptr));
        label->setText(QCoreApplication::translate("SignupScreen", "Name : ", nullptr));
        backButton->setText(QCoreApplication::translate("SignupScreen", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("SignupScreen", "Sign-Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupScreen: public Ui_SignupScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPSCREEN_H
