#include "HomeScreen.h"
#include "ui_HomeScreen.h"
#include "loginscreen.h"
#include "signupscreen.h"

#include <QStackedWidget>

HomeScreen::HomeScreen(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    loginScreen = nullptr;
    signupScreen = nullptr;

    connect(ui->loginButton, &QPushButton::clicked, this, &HomeScreen::on_loginButton_clicked);
    connect(ui->signupButton, &QPushButton::clicked, this, &HomeScreen::on_signupButton_clicked);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}

void HomeScreen::on_loginButton_clicked()
{
    // Switch to Login Screen
    if (!loginScreen) {
        loginScreen = new LoginScreen();
    }
    loginScreen->show();
    this->close();
}

void HomeScreen::on_signupButton_clicked()
{
    // Switch to Signup Screen
    if (!signupScreen) {
        signupScreen = new SignupScreen();
    }
    signupScreen->show();
    this->close();
}
