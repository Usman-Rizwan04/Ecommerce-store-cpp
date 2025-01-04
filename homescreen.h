#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include "loginscreen.h"
#include "signupscreen.h"

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class HomeScreen;
}

class HomeScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeScreen(QMainWindow *parent = nullptr);
    ~HomeScreen();

private slots:
    void on_loginButton_clicked();
    void on_signupButton_clicked();

private:
    Ui::HomeScreen *ui;
    LoginScreen *loginScreen;
    SignupScreen *signupScreen;
};

#endif // HOMESCREEN_H
