/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *labelImg1_1;
    QPushButton *loginButton;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_2;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginPage->sizePolicy().hasHeightForWidth());
        LoginPage->setSizePolicy(sizePolicy);
        LoginPage->setMaximumSize(QSize(800, 800));
        LoginPage->setStyleSheet(QString::fromUtf8(""));
        labelImg1_1 = new QLabel(LoginPage);
        labelImg1_1->setObjectName("labelImg1_1");
        labelImg1_1->setGeometry(QRect(0, 0, 800, 800));
        sizePolicy.setHeightForWidth(labelImg1_1->sizePolicy().hasHeightForWidth());
        labelImg1_1->setSizePolicy(sizePolicy);
        labelImg1_1->setStyleSheet(QString::fromUtf8("image: url(:/images/images/LoginPage.jpg);"));
        labelImg1_1->setMargin(0);
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(340, 410, 93, 30));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(10);
        font.setBold(true);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/images/images/white.png);\n"
""));
        label = new QLabel(LoginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 270, 250, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(250, 50));
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-image: url(:/images/images/darkblue.png);"));
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setScaledContents(false);
        label->setMargin(5);
        usernameLineEdit = new QLineEdit(LoginPage);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(390, 270, 250, 50));
        usernameLineEdit->setMaximumSize(QSize(250, 50));
        usernameLineEdit->setFont(font);
        usernameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-image: url(:/images/images/darkblue.png);\n"
""));
        passwordLineEdit = new QLineEdit(LoginPage);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(390, 330, 250, 50));
        sizePolicy1.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy1);
        passwordLineEdit->setMaximumSize(QSize(250, 50));
        passwordLineEdit->setSizeIncrement(QSize(0, 0));
        passwordLineEdit->setFont(font);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-image: url(:/images/images/darkblue.png);"));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(LoginPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 330, 250, 50));
        label_2->setMaximumSize(QSize(250, 50));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-image: url(:/images/images/darkblue.png);\n"
""));
        label_2->setMargin(5);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        labelImg1_1->setText(QString());
        loginButton->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Masukkan Username Anda :", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("LoginPage", "Masukkan Username...", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginPage", "Masukkan Password...", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Masukkan Password Anda :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
