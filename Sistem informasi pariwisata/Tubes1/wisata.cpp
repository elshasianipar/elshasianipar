#include "wisata.h"

// Constructor untuk WisataList
WisataList::WisataList() : head(nullptr) {}

// Destructor untuk WisataList
WisataList::~WisataList() {
    while (head) {
        Wisata* temp = head;
        head = head->next;
        delete temp;
    }
}

// Menambahkan wisata baru ke dalam daftar
void WisataList::tambahWisata(QString nama, QString lokasi, QString deskripsi) {
    Wisata* baru = new Wisata;
    baru->nama = nama;
    baru->lokasi = lokasi;
    baru->deskripsi = deskripsi;
    baru->next = nullptr;

    if (!head) {
        head = baru; // Jika daftar kosong, set head ke wisata baru
    } else {
        Wisata* temp = head;
        while (temp->next) {
            temp = temp->next; // Mencari akhir daftar
        }
        temp->next = baru; // Menambahkan wisata baru di akhir daftar
    }
}

// Menghapus wisata berdasarkan nama
void WisataList::hapusWisata(QString nama) {
    if (head && head->nama == nama) {
        Wisata* temp = head;
        head = head->next; // Menghapus head
        delete temp;
    } else {
        Wisata* temp = head;
        while (temp->next && temp->next->nama != nama) {
            temp = temp->next; // Mencari wisata yang ingin dihapus
        }
        if (temp->next) {
            Wisata* hapus = temp->next;
            temp->next = temp->next->next; // Menghapus wisata dari daftar
            delete hapus;
        }
    }
}

// Mengubah data wisata
void WisataList::ubahWisata(QString namaLama, QString namaBaru, QString lokasiBaru, QString deskripsiBaru) {
    Wisata* temp = head;
    while (temp && temp->nama != namaLama) {
        temp = temp->next; // Mencari wisata yang ingin diubah
    }
    if (temp) {
        temp->nama = namaBaru;
        temp->lokasi = lokasiBaru;
        temp->deskripsi = deskripsiBaru; // Mengubah data wisata
    }
}

// Mengembalikan daftar wisata
QStringList WisataList::daftarWisata() const {
    QStringList daftar;
    Wisata* temp = head;
    while (temp) {
        daftar.append(temp->nama + " - " + temp->lokasi + " - " + temp->deskripsi); // Menambahkan informasi wisata ke daftar
        temp = temp->next;
    }
    return daftar; // Mengembalikan daftar wisata
}
