#ifndef SIGNUPSCREEN_H
#define SIGNUPSCREEN_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class SignupScreen;
}

class SignupScreen : public QDialog
{
    Q_OBJECT

public:
    explicit SignupScreen(QWidget *parent = nullptr);
    ~SignupScreen();

private slots:
    void on_signupButton_clicked();
    void on_backButton_clicked();

private:
    Ui::SignupScreen *ui;
    void performSignup(const QString &name, const QString &email, const QString &password);
};

#endif // SignupScreen_H
