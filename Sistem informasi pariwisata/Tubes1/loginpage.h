#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

signals:
    void loginBerhasil(bool isAdmin);  // Sinyal untuk login berhasil dengan status admin

private slots:
    void on_loginButton_clicked();  // Slot yang menangani klik tombol login

    void on_pushButton_clicked();

private:
    Ui::LoginPage *ui;
};

#endif // LOGINPAGE_H
