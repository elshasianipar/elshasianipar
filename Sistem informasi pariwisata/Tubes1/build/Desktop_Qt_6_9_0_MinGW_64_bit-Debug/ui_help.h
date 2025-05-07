/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QPushButton *backButton;
    QLabel *labelImg4_1;
    QLabel *label;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName("Help");
        Help->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Help->sizePolicy().hasHeightForWidth());
        Help->setSizePolicy(sizePolicy);
        Help->setStyleSheet(QString::fromUtf8(""));
        backButton = new QPushButton(Help);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(350, 710, 101, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        font.setBold(true);
        backButton->setFont(font);
        backButton->setAutoFillBackground(false);
        backButton->setStyleSheet(QString::fromUtf8("image: url(:/images/images/orange.png);\n"
"color: rgb(255, 255, 255);\n"
""));
        backButton->setFlat(true);
        labelImg4_1 = new QLabel(Help);
        labelImg4_1->setObjectName("labelImg4_1");
        labelImg4_1->setGeometry(QRect(0, 0, 800, 800));
        sizePolicy.setHeightForWidth(labelImg4_1->sizePolicy().hasHeightForWidth());
        labelImg4_1->setSizePolicy(sizePolicy);
        labelImg4_1->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/Help.jpg);"));
        label = new QLabel(Help);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 720, 91, 51));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/darkblue.png);"));
        labelImg4_1->raise();
        label->raise();
        backButton->raise();

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("Help", "Back", nullptr));
        labelImg4_1->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
