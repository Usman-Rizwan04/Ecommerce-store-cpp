#include "signupscreen.h"
#include "ui_SignupScreen.h"
#include "homescreen.h"

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>

SignupScreen::SignupScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupScreen)
{
    ui->setupUi(this);

    // connect(ui->signupButton, &QPushButton::clicked, this, &SignupScreen::on_signupButton_clicked);
    // connect(ui->backButton, &QPushButton::clicked, this, &SignupScreen::on_backButton_clicked);
}

SignupScreen::~SignupScreen()
{
    delete ui;
}


void SignupScreen::on_signupButton_clicked()
{
    QString name = ui->nameInput->text();
    QString email = ui->emailInput->text();
    QString password = ui->passwordInput->text();

    if (name.isEmpty() || email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    performSignup(name, email, password);
}

void SignupScreen::on_backButton_clicked()
{
    // Go back to Home Screen
    HomeScreen *homeScreen = new HomeScreen();
    homeScreen->show();
    this->close();
}

void SignupScreen::performSignup(const QString &name, const QString &email, const QString &password)
{
    // Create network manager to handle API request
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://localhost:5000/api/signup"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    // Prepare the JSON body
    QJsonObject json;
    json["name"] = name;
    json["email"] = email;
    json["password"] = password;
    QJsonDocument doc(json);
    QByteArray data = doc.toJson();

    // Send POST request
    QNetworkReply *reply = manager->post(request, data);
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QMessageBox::information(this, "Signup Success", "Your account has been created.");
            // Go to Home screen or Login screen
            HomeScreen *homeScreen = new HomeScreen();
            homeScreen->show();
            this->close();
        } else {
            QMessageBox::warning(this, "Signup Failed", "Error during signup. Please try again.");
        }
        reply->deleteLater();
    });
}
