/********************************************************************************
** Form generated from reading UI file 'crudpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDPAGE_H
#define UI_CRUDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudPage
{
public:
    QListWidget *wisataListWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label3_1;
    QLineEdit *lokasiLineEdit;
    QLineEdit *deskripsiLineEdit;
    QLineEdit *deskripsiBaruLineEdit;
    QLineEdit *namaLineEdit;
    QLabel *label3_2;
    QLineEdit *namaLamaLineEdit;
    QPushButton *hapusWisataButton;
    QPushButton *ubahWisataButton;
    QLineEdit *lokasiBaruLineEdit;
    QPushButton *tambahWisataButton;
    QLineEdit *namaBaruLineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *helpButton;
    QLabel *labelImg3_1;
    QPushButton *backButton;
    QLabel *label3_3;
    QLabel *label3_4;
    QLabel *label3_5;

    void setupUi(QWidget *CrudPage)
    {
        if (CrudPage->objectName().isEmpty())
            CrudPage->setObjectName("CrudPage");
        CrudPage->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CrudPage->sizePolicy().hasHeightForWidth());
        CrudPage->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        CrudPage->setFont(font);
        wisataListWidget = new QListWidget(CrudPage);
        wisataListWidget->setObjectName("wisataListWidget");
        wisataListWidget->setGeometry(QRect(30, 60, 750, 310));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(10);
        wisataListWidget->setFont(font1);
        wisataListWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/darkblue.png);\n"
"color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(CrudPage);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 440, 781, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label3_1 = new QLabel(gridLayoutWidget);
        label3_1->setObjectName("label3_1");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(12);
        font2.setBold(true);
        label3_1->setFont(font2);
        label3_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label3_1, 0, 0, 1, 1);

        lokasiLineEdit = new QLineEdit(gridLayoutWidget);
        lokasiLineEdit->setObjectName("lokasiLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lokasiLineEdit->sizePolicy().hasHeightForWidth());
        lokasiLineEdit->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tahoma")});
        font3.setPointSize(9);
        font3.setBold(true);
        lokasiLineEdit->setFont(font3);
        lokasiLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(lokasiLineEdit, 2, 0, 1, 1);

        deskripsiLineEdit = new QLineEdit(gridLayoutWidget);
        deskripsiLineEdit->setObjectName("deskripsiLineEdit");
        sizePolicy1.setHeightForWidth(deskripsiLineEdit->sizePolicy().hasHeightForWidth());
        deskripsiLineEdit->setSizePolicy(sizePolicy1);
        deskripsiLineEdit->setFont(font3);
        deskripsiLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(deskripsiLineEdit, 3, 0, 1, 1);

        deskripsiBaruLineEdit = new QLineEdit(gridLayoutWidget);
        deskripsiBaruLineEdit->setObjectName("deskripsiBaruLineEdit");
        sizePolicy1.setHeightForWidth(deskripsiBaruLineEdit->sizePolicy().hasHeightForWidth());
        deskripsiBaruLineEdit->setSizePolicy(sizePolicy1);
        deskripsiBaruLineEdit->setFont(font3);
        deskripsiBaruLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(deskripsiBaruLineEdit, 4, 2, 1, 1);

        namaLineEdit = new QLineEdit(gridLayoutWidget);
        namaLineEdit->setObjectName("namaLineEdit");
        sizePolicy1.setHeightForWidth(namaLineEdit->sizePolicy().hasHeightForWidth());
        namaLineEdit->setSizePolicy(sizePolicy1);
        namaLineEdit->setFont(font3);
        namaLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(namaLineEdit, 1, 0, 1, 1);

        label3_2 = new QLabel(gridLayoutWidget);
        label3_2->setObjectName("label3_2");
        label3_2->setFont(font2);
        label3_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label3_2, 0, 2, 1, 1);

        namaLamaLineEdit = new QLineEdit(gridLayoutWidget);
        namaLamaLineEdit->setObjectName("namaLamaLineEdit");
        sizePolicy1.setHeightForWidth(namaLamaLineEdit->sizePolicy().hasHeightForWidth());
        namaLamaLineEdit->setSizePolicy(sizePolicy1);
        namaLamaLineEdit->setFont(font3);
        namaLamaLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(namaLamaLineEdit, 1, 2, 1, 1);

        hapusWisataButton = new QPushButton(gridLayoutWidget);
        hapusWisataButton->setObjectName("hapusWisataButton");
        hapusWisataButton->setFont(font3);

        gridLayout->addWidget(hapusWisataButton, 5, 0, 1, 1);

        ubahWisataButton = new QPushButton(gridLayoutWidget);
        ubahWisataButton->setObjectName("ubahWisataButton");
        ubahWisataButton->setFont(font3);

        gridLayout->addWidget(ubahWisataButton, 5, 2, 1, 1);

        lokasiBaruLineEdit = new QLineEdit(gridLayoutWidget);
        lokasiBaruLineEdit->setObjectName("lokasiBaruLineEdit");
        sizePolicy1.setHeightForWidth(lokasiBaruLineEdit->sizePolicy().hasHeightForWidth());
        lokasiBaruLineEdit->setSizePolicy(sizePolicy1);
        lokasiBaruLineEdit->setFont(font3);
        lokasiBaruLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(lokasiBaruLineEdit, 3, 2, 1, 1);

        tambahWisataButton = new QPushButton(gridLayoutWidget);
        tambahWisataButton->setObjectName("tambahWisataButton");
        tambahWisataButton->setFont(font3);

        gridLayout->addWidget(tambahWisataButton, 4, 0, 1, 1);

        namaBaruLineEdit = new QLineEdit(gridLayoutWidget);
        namaBaruLineEdit->setObjectName("namaBaruLineEdit");
        sizePolicy1.setHeightForWidth(namaBaruLineEdit->sizePolicy().hasHeightForWidth());
        namaBaruLineEdit->setSizePolicy(sizePolicy1);
        namaBaruLineEdit->setFont(font3);
        namaBaruLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/gray.png);"));

        gridLayout->addWidget(namaBaruLineEdit, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 1, 1, 1);

        helpButton = new QPushButton(CrudPage);
        helpButton->setObjectName("helpButton");
        helpButton->setEnabled(false);
        helpButton->setGeometry(QRect(710, 410, 83, 29));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(13);
        font4.setBold(true);
        helpButton->setFont(font4);
        helpButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/orange.png);\n"
"color: rgb(255, 255, 255);"));
        helpButton->setCheckable(false);
        labelImg3_1 = new QLabel(CrudPage);
        labelImg3_1->setObjectName("labelImg3_1");
        labelImg3_1->setGeometry(QRect(0, 0, 800, 800));
        sizePolicy.setHeightForWidth(labelImg3_1->sizePolicy().hasHeightForWidth());
        labelImg3_1->setSizePolicy(sizePolicy);
        labelImg3_1->setMinimumSize(QSize(800, 800));
        labelImg3_1->setMaximumSize(QSize(800, 800));
        labelImg3_1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/Crud.jpg);"));
        backButton = new QPushButton(CrudPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(280, 740, 239, 27));
        backButton->setFont(font3);
        label3_3 = new QLabel(CrudPage);
        label3_3->setObjectName("label3_3");
        label3_3->setGeometry(QRect(10, 80, 750, 310));
        label3_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/orange.png);"));
        label3_4 = new QLabel(CrudPage);
        label3_4->setObjectName("label3_4");
        label3_4->setGeometry(QRect(290, 30, 221, 30));
        label3_4->setFont(font2);
        label3_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/images/images/darkblue.png);"));
        label3_4->setMargin(5);
        label3_5 = new QLabel(CrudPage);
        label3_5->setObjectName("label3_5");
        label3_5->setGeometry(QRect(280, 40, 221, 30));
        label3_5->setFont(font2);
        label3_5->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/orange.png);"));
        label3_5->setMargin(5);
        labelImg3_1->raise();
        label3_3->raise();
        gridLayoutWidget->raise();
        backButton->raise();
        label3_5->raise();
        label3_4->raise();
        wisataListWidget->raise();
        helpButton->raise();

        retranslateUi(CrudPage);

        QMetaObject::connectSlotsByName(CrudPage);
    } // setupUi

    void retranslateUi(QWidget *CrudPage)
    {
        CrudPage->setWindowTitle(QCoreApplication::translate("CrudPage", "Form", nullptr));
        label3_1->setText(QCoreApplication::translate("CrudPage", "Masukkan Tempat Wisata :", nullptr));
        lokasiLineEdit->setText(QString());
        lokasiLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Lokasi Wisata", nullptr));
        deskripsiLineEdit->setText(QString());
        deskripsiLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Deskripsi Wisata", nullptr));
        deskripsiBaruLineEdit->setText(QString());
        deskripsiBaruLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Deskripsi Baru", nullptr));
        namaLineEdit->setText(QString());
        namaLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Nama Wisata", nullptr));
        label3_2->setText(QCoreApplication::translate("CrudPage", "Edit :", nullptr));
        namaLamaLineEdit->setText(QString());
        namaLamaLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Nama yang ingin diubah", nullptr));
        hapusWisataButton->setText(QCoreApplication::translate("CrudPage", "Hapus Wisata", nullptr));
        ubahWisataButton->setText(QCoreApplication::translate("CrudPage", "Ubah Wisata", nullptr));
        lokasiBaruLineEdit->setText(QString());
        lokasiBaruLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Lokasi Baru", nullptr));
        tambahWisataButton->setText(QCoreApplication::translate("CrudPage", "Tambahkan Wisata", nullptr));
        namaBaruLineEdit->setText(QString());
        namaBaruLineEdit->setPlaceholderText(QCoreApplication::translate("CrudPage", "Nama barunya", nullptr));
        helpButton->setText(QCoreApplication::translate("CrudPage", "Help", nullptr));
        labelImg3_1->setText(QString());
        backButton->setText(QCoreApplication::translate("CrudPage", "Kembali", nullptr));
        label3_3->setText(QString());
        label3_4->setText(QCoreApplication::translate("CrudPage", "List Tempat Wisata :", nullptr));
        label3_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudPage: public Ui_CrudPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDPAGE_H
