#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "======================================================\n";
    cout << "        PROGRAM DEMONSTRASI PRE-DECREMENT (--B)       \n";
    cout << "======================================================\n\n";

    cout << "Penjelasan:\n";
    cout << "--B (Pre-decrement) artinya nilai B dikurangi 1 DULU,\n";
    cout << "baru kemudian nilai barunya digunakan dalam perhitungan\n";
    cout << "atau ditampilkan ke layar.\n\n";

    int B = 10;
    int hasil;

    cout << "------------------------------------------------------\n";
    cout << left 
         << setw(20) << "Keterangan" 
         << setw(15) << "Variabel B" 
         << setw(15) << "Variabel Hasil" << endl;
    cout << "------------------------------------------------------\n";

    // 1. Kondisi Awal
    cout << left 
         << setw(20) << "Nilai Awal" 
         << setw(15) << B 
         << setw(15) << "-" << endl;

    // 2. Operasi Pre-decrement: hasil = --B
    hasil = --B;
    cout << left 
         << setw(20) << "hasil = --B" 
         << setw(15) << B 
         << setw(15) << hasil << endl;

    // 3. Pengecekan setelah operasi
    cout << left 
         << setw(20) << "Nilai Akhir" 
         << setw(15) << B 
         << setw(15) << hasil << endl;
    cout << "------------------------------------------------------\n\n";

    cout << "Catatan:\n";
    cout << "B berkurang menjadi 9 terlebih dahulu, sehingga\n";
    cout << "variabel 'hasil' langsung mendapatkan nilai 9.\n";
    cout << "======================================================\n";

    return 0;
}
