/********************************************************************************
** Form generated from reading UI file 'dashboardpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDPAGE_H
#define UI_DASHBOARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardPage
{
public:
    QLabel *labelWelcome;
    QPushButton *kelolaDataButton;
    QLabel *label;

    void setupUi(QWidget *DashboardPage)
    {
        if (DashboardPage->objectName().isEmpty())
            DashboardPage->setObjectName("DashboardPage");
        DashboardPage->setEnabled(true);
        DashboardPage->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DashboardPage->sizePolicy().hasHeightForWidth());
        DashboardPage->setSizePolicy(sizePolicy);
        DashboardPage->setMinimumSize(QSize(800, 800));
        DashboardPage->setMaximumSize(QSize(800, 800));
        labelWelcome = new QLabel(DashboardPage);
        labelWelcome->setObjectName("labelWelcome");
        labelWelcome->setGeometry(QRect(0, 0, 800, 800));
        sizePolicy.setHeightForWidth(labelWelcome->sizePolicy().hasHeightForWidth());
        labelWelcome->setSizePolicy(sizePolicy);
        labelWelcome->setMinimumSize(QSize(800, 800));
        labelWelcome->setMaximumSize(QSize(800, 800));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(15);
        font.setBold(true);
        labelWelcome->setFont(font);
        labelWelcome->setStyleSheet(QString::fromUtf8("image: url(:/images/images/DashboardPage.jpg);"));
        kelolaDataButton = new QPushButton(DashboardPage);
        kelolaDataButton->setObjectName("kelolaDataButton");
        kelolaDataButton->setGeometry(QRect(560, 699, 201, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(15);
        font1.setBold(true);
        kelolaDataButton->setFont(font1);
        kelolaDataButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/orange.png);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(DashboardPage);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 710, 201, 51));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/darkblue.png);"));
        labelWelcome->raise();
        label->raise();
        kelolaDataButton->raise();

        retranslateUi(DashboardPage);

        QMetaObject::connectSlotsByName(DashboardPage);
    } // setupUi

    void retranslateUi(QWidget *DashboardPage)
    {
        DashboardPage->setWindowTitle(QCoreApplication::translate("DashboardPage", "Form", nullptr));
        labelWelcome->setText(QString());
        kelolaDataButton->setText(QCoreApplication::translate("DashboardPage", "Lihat Data ", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DashboardPage: public Ui_DashboardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDPAGE_H
