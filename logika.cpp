#include <iostream>
#include <string>
using namespace std;


char pembeli[40];
string code;
int harga, jumlah, total;

void header() {
    cout << "     TOKO LAPTOP RAINAL      " << endl;
    cout << "===================================" << endl;
}

void inputPembeli() {
    cout << "nama pembeli: ";
    cin >> pembeli;
}

void tampilkanMenu() {
    cout << "pilihan barang yang tersedia store" << endl;
    cout << "1-LAPTOP ACER NITRO 5-Rp 9.500.000" << endl;
    cout << "2-LAPTOP ASUS TUF 15-Rp 10.500.000" << endl;
    cout << "3-LAPTOP LENOVO X1 CARBON-Rp 18.000.000" << endl;
    cout << "4-LAPTOP ROG-Rp 19.500.000" << endl;
    cout << endl;
}

void inputPilihan() {
    cout << "barang yang dipilih : ";
    cin >> code;
    cout << "jumlah beli         : ";
    cin >> jumlah;
}

void hitungHarga() {
    if(code == "1") {
        cout << "LAPTOP ACER NITRO 5" << endl;
        harga = 9500000;
    } else if(code == "2") {
        cout << "LAPTOP ASUS TUF 15" << endl;
        harga = 10500000;
    } else if(code == "3") {
        cout << "LAPTOP LENOVO X1 CARBON" << endl;
        harga = 18000000;
    } else if(code == "4") {
        cout << "LAPTOP ROG" << endl;
        harga = 19500000;
    } else {
        cout << "barang yang anda pilih tidak tersedia" << endl;
        harga = 0;
    }
}

void tampilkanHasil() {
    if(harga != 0) {
        total = harga * jumlah;
        cout << "===========================" << endl;
        cout << "Nama pembeli              : " << pembeli << endl;
        cout << "Harga                     : " << harga << endl;
        cout << "Jumlah                    : " << jumlah << endl;
        cout << "Total                     : " << total << endl;
    }
}

int main() {
    header();
    inputPembeli();
    tampilkanMenu();
    inputPilihan();
    hitungHarga();
    tampilkanHasil();
    return 0;
}