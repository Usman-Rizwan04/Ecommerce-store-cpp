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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName("HomeScreen");
        HomeScreen->resize(564, 292);
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 0, 321, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(90, 130, 80, 24));
        signupButton = new QPushButton(centralwidget);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(230, 130, 80, 24));
        HomeScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeScreen);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 564, 21));
        HomeScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeScreen);
        statusbar->setObjectName("statusbar");
        HomeScreen->setStatusBar(statusbar);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "HomeScreen", nullptr));
        label->setText(QCoreApplication::translate("HomeScreen", "Welcome To TShirt Store", nullptr));
        loginButton->setText(QCoreApplication::translate("HomeScreen", "Login", nullptr));
        signupButton->setText(QCoreApplication::translate("HomeScreen", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
