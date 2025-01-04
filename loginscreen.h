#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include "productsscreen.h"

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = nullptr);
    ~LoginScreen();

private slots:
    void on_loginButton_clicked();
    void on_backButton_clicked();

private:
    Ui::LoginScreen *ui;
    ProductsScreen *productsScreen;
    void performLogin(const QString &email, const QString &password);
};

#endif // LOGINSCREEN_H
