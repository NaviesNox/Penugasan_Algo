#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Header Program
    cout << "========================================================================\n";
    cout << "     PROGRAM PERBANDINGAN OPERATOR PRE-DECREMENT (--B) & POST-DECREMENT (B--)\n";
    cout << "========================================================================\n\n";

    cout << "PENJELASAN:\n";
    cout << "1. --B (Pre-decrement)  : Nilai B dikurangi 1 TERLEBIH DAHULU,\n";
    cout << "                          kemudian nilai barunya digunakan.\n";
    cout << "2. B-- (Post-decrement) : Nilai B digunakan TERLEBIH DAHULU,\n";
    cout << "                          kemudian nilai B baru dikurangi 1.\n\n";

    // -------------------------------------------------------------
    // DEMONSTRASI 1: Penggunaan dalam Operasi Penugasan (Assignment)
    // -------------------------------------------------------------
    cout << "------------------------------------------------------------------------\n";
    cout << " DEMONSTRASI 1: Pada Operasi Penugasan (Assignment)\n";
    cout << "------------------------------------------------------------------------\n";

    int B_pre = 10;
    int B_post = 10;
    int hasil_pre;
    int hasil_post;

    // Menampilkan Header Tabel dengan manipulator setw()
    cout << left 
         << setw(16) << "Operasi" 
         << setw(15) << "B Nilai Awal" 
         << setw(20) << "Nilai Ditampung" 
         << setw(15) << "B Nilai Akhir" << endl;
    cout << "------------------------------------------------------------------------\n";

    // Pre-decrement
    hasil_pre = --B_pre;
    cout << left 
         << setw(16) << "hasil = --B" 
         << setw(15) << "10" 
         << setw(20) << hasil_pre 
         << setw(15) << B_pre << endl;

    // Post-decrement
    hasil_post = B_post--;
    cout << left 
         << setw(16) << "hasil = B--" 
         << setw(15) << "10" 
         << setw(20) << hasil_post 
         << setw(15) << B_post << endl;

    cout << "------------------------------------------------------------------------\n\n";

    // -------------------------------------------------------------
    // DEMONSTRASI 2: Penggunaan Langsung pada Output (cout)
    // -------------------------------------------------------------
    cout << "------------------------------------------------------------------------\n";
    cout << " DEMONSTRASI 2: Pada Output Langsung (cout)\n";
    cout << "------------------------------------------------------------------------\n";

    int B1 = 10;
    int B2 = 10;

    cout << left 
         << setw(16) << "Variabel" 
         << setw(15) << "Nilai Awal" 
         << setw(20) << "Saat cout" 
         << setw(15) << "cout Berikutnya" << endl;
    cout << "------------------------------------------------------------------------\n";

    // Pre-decrement pada cout
    cout << left 
         << setw(16) << "--B (Pre)" 
         << setw(15) << B1;
    cout << left << setw(20) << --B1; // dikurangi dulu sebelum dicetak
    cout << left << setw(15) << B1 << endl;

    // Post-decrement pada cout
    cout << left 
         << setw(16) << "B-- (Post)" 
         << setw(15) << B2;
    cout << left << setw(20) << B2--; // dicetak dulu nilai lama, baru dikurangi
    cout << left << setw(15) << B2 << endl;

    cout << "------------------------------------------------------------------------\n\n";

    // Kesimpulan
    cout << "KESIMPULAN:\n";
    cout << "* Pada --B, perubahan langsung terlihat saat ekspresi dieksekusi.\n";
    cout << "* Pada B--, nilai yang lama dipakai saat ekspresi dieksekusi,\n";
    cout << "  dan perubahannya baru terlihat pada baris / pemanggilan berikutnya.\n";
    cout << "========================================================================\n";

    return 0;
}
