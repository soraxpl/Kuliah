// Membuat program struct sederhana simple
#include <iostream>
#include <string>

using namespace std;

struct databarang
{
    string namabarang;
    int jumlah;
    int harga;
    int total;
};

int main()
{
    databarang barang[3];
    int i;
    for (i=0; i<3; i++)
    {
        cout << "Masukkan nama barang : ";
        cin >> barang[i].namabarang;
        cout << "Masukkan jumlah barang : ";
        cin >> barang[i].jumlah;
        cout << "Masukkan harga barang : ";
        cin >> barang[i].harga;
        barang[i].total = barang[i].jumlah * barang[i].harga;
    }
    cout << "Nama Barang\tJumlah\tHarga\tTotal" << endl;
    for (i=0; i<3; i++)
    {
        cout << barang[i].namabarang << "\t\t" << barang[i].jumlah << "\t" << barang[i].harga << "\t" << barang[i].total << endl;
    }
    return 0;
}