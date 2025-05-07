#ifndef CRUDPAGE_H
#define CRUDPAGE_H

#include <QWidget>
#include "wisatalist.h"  // Pastikan Anda memiliki kelas WisataList

namespace Ui {
class CrudPage;
}

class CrudPage : public QWidget
{
    Q_OBJECT

public:
    explicit CrudPage(QWidget *parent = nullptr);
    ~CrudPage();

    // Metode untuk mengatur mode edit berdasarkan status pengguna
    void setEditMode(bool isAdmin);

signals:
    void backToDashboard();  // Tambahkan sinyal untuk kembali ke halaman Dashboard
    void helpRequested();

private slots:
    void on_tambahWisataButton_clicked();
    void on_hapusWisataButton_clicked();
    void on_ubahWisataButton_clicked();
    void on_tampilkanWisataButton_clicked();
    void on_helpButton_clicked();

private:
    Ui::CrudPage *ui;
    WisataList wisataList;  // Deklarasikan objek wisataList
};

#endif // CRUDPAGE_H
