#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "======================================================\n";
    cout << "        PROGRAM DEMONSTRASI POST-DECREMENT (B--)      \n";
    cout << "======================================================\n\n";

    cout << "Penjelasan:\n";
    cout << "B-- (Post-decrement) artinya nilai B digunakan DULU\n";
    cout << "dalam perhitungan atau ditampilkan ke layar, baru\n";
    cout << "setelah itu nilai B dikurangi 1.\n\n";

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

    // 2. Operasi Post-decrement: hasil = B--
    hasil = B--;
    cout << left 
         << setw(20) << "hasil = B--" 
         << setw(15) << "10 -> 9" 
         << setw(15) << hasil << endl;

    // 3. Pengecekan setelah operasi
    cout << left 
         << setw(20) << "Nilai Akhir" 
         << setw(15) << B 
         << setw(15) << hasil << endl;
    cout << "------------------------------------------------------\n\n";

    cout << "Catatan:\n";
    cout << "Variabel 'hasil' mengambil nilai lama B yaitu 10.\n";
    cout << "Setelah baris penugasan selesai, nilai B baru menjadi 9.\n";
    cout << "======================================================\n";

    return 0;
}
