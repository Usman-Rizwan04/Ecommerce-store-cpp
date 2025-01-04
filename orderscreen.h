#ifndef ORDERSCREEN_H
#define ORDERSCREEN_H

#include <QDialog>
#include <QPushButton>
#include <QListWidget>
#include <QJsonObject>

namespace Ui {
class OrderScreen;
}

class OrderScreen : public QDialog
{
    Q_OBJECT

public:
    explicit OrderScreen(QWidget *parent = nullptr);
    ~OrderScreen();

private:
    void fetchCartItems();
    void on_checkoutButton_clicked();

private:
    Ui::OrderScreen *ui;
    QJsonObject cart;
    int cartId;
    int totalPrice;
    void displayCartItems(const QJsonObject &cartItems);
};

#endif // ORDERSCREEN_H
