#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Help)
{
    ui->setupUi(this);

    this->setFixedSize(800, 800);

    // Hubungkan tombol kembali dengan sinyal
    connect(ui->backButton, &QPushButton::clicked, this, &Help::backToCrud);
}

Help::~Help()
{
    delete ui;
}



void Help::on_backButton_clicked()
{
    emit backToCrud();  // Emit sinyal kembali ke CrudPage
}

