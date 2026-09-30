#include <iostream>
using namespace std;

int main() {
    double nilaiAkademik, nilaiBahasa;
    int pilihanJalur;

    cout << "Nilai Tes Akademik       : ";
    cin >> nilaiAkademik;
    cout << "Nilai Tes Bahasa Inggris : ";
    cin >> nilaiBahasa;

    if (nilaiAkademik >= 75 && nilaiBahasa >= 75) {
        cout << "Status: Diterima" << endl;
        cout << "Pilih jalur penerimaan:" << endl;
        cout << "1. Reguler" << endl;
        cout << "2. Beasiswa" << endl;
        cout << "Pilihan jalur: ";
        cin >> pilihanJalur;

        switch (pilihanJalur) {
            case 1:
                cout << "Jalur yang dipilih: Reguler" << endl;
                break;
            case 2:
                cout << "Jalur yang dipilih: Beasiswa" << endl;
                break;
            default:
                cout << "Pilihan jalur tidak tersedia." << endl;
        }
    } else {
        cout << "Status: Tidak Diterima" << endl;
    }

    return 0;
}
