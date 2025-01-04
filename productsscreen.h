#ifndef PRODUCTSSCREEN_H
#define PRODUCTSSCREEN_H

#include "orderscreen.h"

#include <QDialog>
#include <QPushButton>
#include <QListView>
#include <QJsonArray>
#include <QSet>

namespace Ui {
class ProductsScreen;
}

class ProductsScreen : public QDialog
{
    Q_OBJECT

public:
    explicit ProductsScreen(QWidget *parent = nullptr);
    ~ProductsScreen();

private slots:
    void on_cartButton_clicked();
    void on_backButton_clicked();
    void fetchProducts();

private:
    Ui::ProductsScreen *ui;
    OrderScreen *orderScreen;
    QJsonArray products;
    void displayProducts(const QJsonArray &products);
    void addProductsToCart(QJsonArray productsArray);

};

#endif // PRODUCTSSCREEN_H
