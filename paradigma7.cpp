#include <iostream>
using namespace std;

class Barang {
    public :
        string nama;
        int jumlah;
        string kategori; 
        string tanggalProduksi;
 
         void tampilkanSpesifikasi() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "====================" << endl;
    }
}; //batas class

int main(){
    Barang elektro;
    Barang nonelektro;

    // Mengisi data barang elektronik
    elektro.nama = " Laptop Dell Inspiron";
    elektro.jumlah = 9;
    elektro.kategori = "Elektronik";
    elektro.tanggalProduksi = "2025-09-19";

    // Mengisi data barang non-elektronik
    nonelektro.nama = "Beras Premium 5kg";
    nonelektro.jumlah = 100;
    nonelektro.kategori = "pangan";
    nonelektro.tanggalProduksi = "2024-03-20";

    elektro.tampilkanSpesifikasi();
    nonelektro.tampilkanSpesifikasi();


}
