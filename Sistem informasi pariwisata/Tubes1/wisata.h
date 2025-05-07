#ifndef WISATA_H
#define WISATA_H

#include <QString>
#include <QStringList>

struct Wisata {
    QString nama;
    QString lokasi;
    QString deskripsi;
    Wisata* next;
};

class WisataList {
public:
    WisataList();
    ~WisataList();

    void tambahWisata(QString nama, QString lokasi, QString deskripsi);
    void hapusWisata(QString nama);
    void ubahWisata(QString namaLama, QString namaBaru, QString lokasiBaru, QString deskripsiBaru);
    QStringList daftarWisata() const;

    Wisata* getHead() const { return head; }

private:
    Wisata* head;
};

#endif // WISATA_H
