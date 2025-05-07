#include "crudpage.h"
#include "ui_crudpage.h"
#include <QMessageBox>

CrudPage::CrudPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CrudPage)
{
    ui->setupUi(this);

    this->setFixedSize(800, 800);

    ui->helpButton->setEnabled(true); // mengaktifkan tombol help

    // Menambahkan data wisata awal
    wisataList.tambahWisata("Pantai Kuta", "Bali", "Pantai yang terkenal dengan ombaknya.");
    wisataList.tambahWisata("Gunung Bromo", "Jawa Timur", "Gunung berapi yang terkenal dengan pemandangan matahari terbit.");
    wisataList.tambahWisata("Candi Borobudur", "Jawa Tengah", "Candi Buddha terbesar di dunia.");
    wisataList.tambahWisata("Danau Toba", "Sumatera Utara", "Danau vulkanik terbesar di dunia.");

    // Menampilkan daftar wisata awal di QListWidget
    QStringList daftar = wisataList.daftarWisata();
    ui->wisataListWidget->addItems(daftar);

    // Hubungkan tombol kembali dengan sinyal
    connect(ui->backButton, &QPushButton::clicked, this, &CrudPage::backToDashboard);

    // Di constructor CrudPage
    connect(ui->helpButton, &QPushButton::clicked, this, &CrudPage::helpRequested);

}

CrudPage::~CrudPage()
{
    delete ui;
}

// Metode untuk mengatur mode edit berdasarkan status pengguna
void CrudPage::setEditMode(bool isAdmin) {
    // Mengatur visibilitas tombol dan QLineEdit serta QLabel berdasarkan status admin
    ui->tambahWisataButton->setVisible(isAdmin);
    ui->hapusWisataButton->setVisible(isAdmin);
    ui->ubahWisataButton->setVisible(isAdmin);
    //ui->tampilkanWisataButton->setVisible(isAdmin);
    ui->helpButton->setVisible(isAdmin);

    // Menyembunyikan QLineEdit dan QLabel jika bukan admin
    ui->namaLineEdit->setVisible(isAdmin);
    ui->lokasiLineEdit->setVisible(isAdmin);
    ui->deskripsiLineEdit->setVisible(isAdmin);
    ui->namaLamaLineEdit->setVisible(isAdmin);
    ui->namaBaruLineEdit->setVisible(isAdmin);
    ui->lokasiBaruLineEdit->setVisible(isAdmin);
    ui->deskripsiBaruLineEdit->setVisible(isAdmin);

    // Menyembunyikan QLabel yang terkait
    ui->label3_1->setVisible(isAdmin);
    ui->label3_2->setVisible(isAdmin);

}

// Slot untuk menambahkan wisata
void CrudPage::on_tambahWisataButton_clicked() {
    QString nama = ui->namaLineEdit->text();
    QString lokasi = ui->lokasiLineEdit->text();
    QString deskripsi = ui->deskripsiLineEdit->text();

    if (nama.isEmpty() || lokasi.isEmpty() || deskripsi.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Harap lengkapi semua data wisata.");
        return;
    }

    wisataList.tambahWisata(nama, lokasi, deskripsi);
    QMessageBox::information(this, "Sukses", "Wisata berhasil ditambahkan!");
    ui->namaLineEdit->clear();
    ui->lokasiLineEdit->clear();
    ui->deskripsiLineEdit->clear();

    // Menampilkan daftar wisata setelah penambahan
    QStringList daftar = wisataList.daftarWisata();
    ui->wisataListWidget->clear();
    ui->wisataListWidget->addItems(daftar);
}

// Slot untuk menghapus wisata
void CrudPage::on_hapusWisataButton_clicked() {
    QString nama = ui->namaLineEdit->text();

    if (nama.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Masukkan nama wisata yang ingin dihapus.");
        return;
    }

    wisataList.hapusWisata(nama);
    QMessageBox::information(this, "Sukses", "Wisata berhasil dihapus!");
    ui->namaLineEdit->clear();

    // Menampilkan daftar wisata setelah penghapusan
    QStringList daftar = wisataList.daftarWisata();
    ui->wisataListWidget->clear();
    ui->wisataListWidget->addItems(daftar);
}

// Slot untuk mengubah wisata
void CrudPage::on_ubahWisataButton_clicked() {
    QString namaLama = ui->namaLamaLineEdit->text();
    QString namaBaru = ui->namaBaruLineEdit->text();
    QString lokasiBaru = ui->lokasiBaruLineEdit->text();
    QString deskripsiBaru = ui->deskripsiBaruLineEdit->text();

    if (namaLama.isEmpty() || namaBaru.isEmpty() || lokasiBaru.isEmpty() || deskripsiBaru.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Harap lengkapi semua data.");
        return;
    }

    wisataList.ubahWisata(namaLama, namaBaru, lokasiBaru, deskripsiBaru);
    QMessageBox::information(this, "Sukses", "Wisata berhasil diubah!");

    // Menampilkan daftar wisata setelah pengubahan
    QStringList daftar = wisataList.daftarWisata();
    ui->wisataListWidget->clear();
    ui->wisataListWidget->addItems(daftar);
}

void CrudPage::on_helpButton_clicked()
{
    emit helpRequested();  // Emit sinyal untuk meminta halaman Help
}

