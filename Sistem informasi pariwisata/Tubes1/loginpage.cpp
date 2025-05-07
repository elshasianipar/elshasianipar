#include "loginpage.h"
#include "ui_loginpage.h"
#include <QMessageBox>

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    this->setFixedSize(800, 800);

}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    // Cek username dan password
    if (username == "admin" && password == "admin123") {
        emit loginBerhasil(true);  // Emit sinyal dengan status admin
    } else if (username == "user" && password == "user123") {
        emit loginBerhasil(false);  // Emit sinyal dengan status pengguna biasa
    } else {
        QMessageBox::warning(this, "Login Gagal", "Username atau password salah.");
    }
}


