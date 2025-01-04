#include "loginscreen.h"
#include "ui_LoginScreen.h"
#include "homescreen.h"
#include "productsscreen.h"

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSettings>


LoginScreen::LoginScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginScreen) {
    ui->setupUi(this);
    productsScreen = nullptr;

    // connect(ui->loginButton, &QPushButton::clicked, this, &LoginScreen::on_loginButton_clicked);
    // connect(ui->backButton, &QPushButton::clicked, this, &LoginScreen::on_backButton_clicked);
}

LoginScreen::~LoginScreen() {
    delete ui;
}


void LoginScreen::on_loginButton_clicked()
{
    QString email = ui->emailInput->text();
    QString password = ui->passwordInput->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in both fields.");
        return;
    }

    performLogin(email, password);
}

void LoginScreen::on_backButton_clicked()
{
    // Go back to Home Screen
    HomeScreen *homeScreen = new HomeScreen();
    homeScreen->show();
    this->close();
}

void LoginScreen::performLogin(const QString &email, const QString &password)
{
    // Create network manager to handle API request
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://localhost:5000/api/login"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    // Prepare the JSON body
    QJsonObject json;
    json["email"] = email;
    json["password"] = password;
    QJsonDocument doc(json);
    QByteArray data = doc.toJson();

    // Send POST request
    QNetworkReply *reply = manager->post(request, data);
    connect(reply, &QNetworkReply::finished, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QJsonDocument doc = QJsonDocument::fromJson(responseData);

            if(doc.isObject()) {
                QJsonObject responseObj = doc.object();
                int userId = responseObj["userId"].toInt();

                QSettings settings("DUET", "EcommerceStore");
                settings.setValue("userId", userId);

                QMessageBox::information(this, "Login Success", "You have successfully logged in.");
                if(!productsScreen){
                    productsScreen = new ProductsScreen();
                }
                productsScreen->show();
                this->close();
            } else {
                QMessageBox::warning(this, "Login Failed", "Something went wrong. Visit logs for debugging!");
            }
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
        }
        reply->deleteLater();
    });
}
