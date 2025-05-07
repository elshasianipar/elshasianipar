#include "dashboardpage.h"
#include "ui_dashboardpage.h"

DashboardPage::DashboardPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DashboardPage)
{
    ui->setupUi(this);

    this->setFixedSize(800, 800);

    // Menghubungkan tombol kelolaDataButton dengan slot on_kelolaDataButton_clicked
    connect(ui->kelolaDataButton, &QPushButton::clicked, this, &DashboardPage::on_kelolaDataButton_clicked);
}

DashboardPage::~DashboardPage()
{
    delete ui;
}

// Slot yang akan memancarkan sinyal kelolaData
void DashboardPage::on_kelolaDataButton_clicked() {
    emit kelolaData();  // Memancarkan sinyal kelolaData
}
