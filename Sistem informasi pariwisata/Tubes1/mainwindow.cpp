#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"
#include "dashboardpage.h"
#include "crudpage.h"
#include "help.h"

#include <QMessageBox>
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Mengatur ukuran window
    //this->resize(800, 800);
    this->setFixedSize(800, 800);  // Lebar 800 piksel, tinggi 800 piksel

    // Membuat QStackedWidget untuk mengelola tampilan halaman
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);

    // Membuat instance dari halaman-halaman
    loginPage = new LoginPage(this);
    dashboardPage = new DashboardPage(this);
    crudPage = new CrudPage(this);
    helpPage = new Help(this);

    // Menambahkan halaman ke stackedWidget
    stackedWidget->addWidget(loginPage);      // index 0
    stackedWidget->addWidget(dashboardPage);  // index 1
    stackedWidget->addWidget(crudPage);       // index 2
    stackedWidget->addWidget(helpPage);       // index 3

    // Menampilkan halaman login sebagai halaman awal
    stackedWidget->setCurrentWidget(loginPage);

    // Menghubungkan sinyal dari halaman login ke slot di MainWindow
    connect(loginPage, &LoginPage::loginBerhasil, this, [=](bool isAdmin) {
        stackedWidget->setCurrentWidget(dashboardPage); // Pindah ke halaman dashboard
        if (isAdmin) {
            // Jika admin, aktifkan tombol untuk mengedit data
            crudPage->setEditMode(true);
        } else {
            // Jika pengguna biasa, nonaktifkan tombol untuk mengedit data
            crudPage->setEditMode(false);
        }
    });

    // Menghubungkan sinyal dari halaman dashboard ke slot di MainWindow
    connect(dashboardPage, &DashboardPage::kelolaData, this, [=]() {
        stackedWidget->setCurrentWidget(crudPage); // Pindah ke halaman CRUD
    });

    connect(crudPage, &CrudPage::backToDashboard, this, [=]() {
        stackedWidget->setCurrentWidget(dashboardPage);
    });

    // Hubungkan sinyal kembali dari Help ke CrudPage
    connect(helpPage, &Help::backToCrud, this, [=](){
        stackedWidget->setCurrentWidget(crudPage);
    });

    // Hubungkan sinyal navigasi dari CrudPage ke Help
    connect(crudPage, &CrudPage::helpRequested, this, [=](){
        stackedWidget->setCurrentWidget(helpPage);
    });
}

MainWindow::~MainWindow() {
    delete ui; // Menghapus objek ui untuk mencegah kebocoran memori
}
