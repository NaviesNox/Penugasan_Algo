#include <iostream>
using namespace std;
int main() {
    int pilihan;
    double bilanganPertama, bilanganKedua, hasil;
    cout << "========== KALKULATOR ==========" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << "=================================" << endl;
    cout << "Pilih operasi: ";
    cin >> pilihan;
    cout << "Masukkan bilangan pertama: ";
    cin >> bilanganPertama;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilanganKedua;
    switch (pilihan) {
        case 1:
            hasil = bilanganPertama + bilanganKedua;
            cout << "Hasil penjumlahan: " << hasil << endl;
            break;
        case 2:
            hasil = bilanganPertama - bilanganKedua;
            cout << "Hasil pengurangan: " << hasil << endl;
            break;
        case 3:
            hasil = bilanganPertama * bilanganKedua;
            cout << "Hasil perkalian: " << hasil << endl;
            break;
        case 4:
            if (bilanganKedua == 0) {
                cout << "Tidak dapat melakukan pembagian dengan nol" << endl;
            } else {
                hasil = bilanganPertama / bilanganKedua;
                cout << "Hasil pembagian: " << hasil << endl;
            }
            break;
        case 5:
            if (bilanganKedua == 0) {
                cout << "Tidak dapat melakukan modulus dengan nol" << endl;
            } else if (bilanganPertama != static_cast<int>(bilanganPertama) ||
                       bilanganKedua != static_cast<int>(bilanganKedua)) {
                cout << "Modulus hanya dapat digunakan untuk bilangan bulat." << endl;
            } else {
                cout << "Hasil modulus: "
                     << static_cast<int>(bilanganPertama) % static_cast<int>(bilanganKedua)
                     << endl;
            }
            break;
        default:
            cout << "Pilihan operasi tidak tersedia." << endl;
    }
    return 0;
}
