#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <queue>
#include <cmath>
#include <algorithm>
#include <deque>
#include <map>
#include <set>
#include <conio.h>


using namespace std;

int main() {
    // Deklarasi Variable
    system("cls");
    int pilihan, p2;
    double sisi, panjang, lebar, alas, tinggi, jari2, rusuk, phi = 3.14;
    
    do
    {
        /* code */
        cout << "Menghitung Bangun Datar dan Ruang : " << endl ;
        cout << "====================================" << endl ;
        cout << "1. Bangun Datar" << endl ;
        cout << "2. Bangun Ruang" << endl ;
        cout << "3. Keluar" << endl ;
        cout << "Pilihan : ";
        while (!(cin >> pilihan))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input harus berupa angka. Silakan coba lagi: ";
        }
        cout << endl;
        
        if  (pilihan < 1 || pilihan > 3){
            cout << "Error : Pilihan harus angka 1-3" << endl;
        }
       
       
        
        system("cls");
        switch (pilihan)
        {
            
        case 1:
            /* code */
            do
            {
                cout << "Menghitung Bangun Datar : " << endl ;
                cout << "-------------------------" << endl ;
                cout << "1. Persegi" << endl ;
                cout << "2. Persegi Panjang" << endl ;
                cout << "3. Segitiga" << endl ;
                cout << "4. Lingkaran" << endl ;
                cout << "5. Kembali Ke Menu awal" << endl ;
                cout << "Pilihan : ";
                while (!(cin >> p2))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Input harus berupa angka. Silakan coba lagi: ";
                }
                cout << endl;
                switch (p2)
                {
                    if  (p2 < 1 || p2 > 5){
                cout << "Error : Pilihan harus angka 1-5" << endl;
                }
                case 1:
                    /* code */
                    cout << "Persegi :" << endl ;
                    cout << "---------" << endl ;
                    cout << "input sisi = " ; cin >> sisi; cout << endl;
                    cout << "Luas       = " << sisi * sisi << endl;
                    cout << "Keliling   = " << 4 * sisi << endl;
                    break;
                case 2 :
                    /* code */
                    cout << "Menghitung Persegi Panjang : " << endl ;
                    cout << "----------------------------" << endl ;
                    cout << "Masukkan Panjang : " ; cin >> panjang; cout << endl;
                    cout << "Masukkan Lebar   : " ; cin >> lebar; cout << endl;
                    cout << "Luas             : " << panjang * lebar << endl;
                    cout << "Keliling         : " << 2 * (panjang + lebar) << endl;

                    break;
                case 3 : 
                    /* code */
                    cout << "Menghitung Segitiga : " << endl ;
                    cout << "--------------------" << endl ;
                    cout << "Masukkan Alas   : " ; cin >> alas; cout << endl;
                    cout << "Masukkan Tinggi : " ; cin >> tinggi; cout << endl;
                    cout << "Luas Segitiga   : " << 0.5 * alas * tinggi << endl;

                    break;
                case 4 :
                    /* code */
                    cout << "Menghitung Lingkaran : " << endl ;
                    cout << "---------------------" << endl ;
                    cout << "Masukkan Jari-jari : " ; cin >> jari2; cout << endl;
                    cout << "Luas               : " << phi * jari2 * jari2 << endl;
                    cout << "Keliling           : " << 2 * phi * jari2 << endl;

                    break;
                case 5 :
                    /* code */
                    system("cls");
                    cout << "Kembali Ke Menu awal" << endl;
                    break;
                default:
                   cout << "Pilihan tidak ada di Menu" << endl;
                    break;
                }

                if (p2 >= 1 && p2 <= 4)
                {
                    cout << endl << "Tekan tombol apa saja untuk kembali ke menu awal..." << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    _getch();
                    p2 = 5;
                    system("cls");
                    break;
                }
            } while (p2 != 5);     //Ketika p2 tidak sama dengan 5 maka akan mengulang perintah di dalam do while

            break;
        case 2:
            do
            {

                /* code */
                cout << "Menghitung Bangun Ruang : " << endl ;
                cout << "====================================" << endl ;
                cout << "1. Kubus" << endl ;
                cout << "2. Balok" << endl ;
                cout << "3. Tabung" << endl ;
                cout << "4. Bola" << endl ;
                cout << "5. Kembali Ke Menu awal" << endl ;
                cout << "Pilihan : ";
                while (!(cin >> p2))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Input harus berupa angka. Silakan coba lagi: ";
                }
                cout << endl;
                switch (p2)
                { if  (p2 < 1 || p2 > 5){
                cout << "Error : Pilihan harus angka 1-5" << endl;
                }
            case 1:
                /* code */
                cout << "Menghitung Kubus : " << endl ;
                cout << "-------------------" << endl ;
                cout << "Masukkan Rusuk  : " ; cin >> rusuk; cout << endl;
                cout << "Volume          : " << rusuk * rusuk * rusuk << endl;
                cout << "Luas Permukaan  : " << 6 * rusuk * rusuk << endl;
                break;
            case 2:
                /* code */
                cout << "Menghitung Balok : " << endl ;
                cout << "-------------------" << endl ;
                cout << "Masukkan Panjang : " ; cin >> panjang; cout << endl;
                cout << "Masukkan Lebar   : " ; cin >> lebar; cout << endl;
                cout << "Masukkan Tinggi  : " ; cin >> tinggi; cout << endl;
                cout << "Volume           : " << panjang * lebar * tinggi << endl;
                cout << "Luas Permukaan   : " << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi) << endl;
                break;
            case 3:
                /* code */
                cout << "Menghitung Tabung : " << endl ;
                cout << "-------------------" << endl ;
                cout << "Masukkan Jari-jari : " ; cin >> jari2; cout << endl;
                cout << "Masukkan Tinggi    : " ; cin >> tinggi; cout << endl;
                cout << "Volume             : " << phi * jari2 * jari2 * tinggi << endl;
                cout << "Luas Permukaan     : " << 2 * phi * jari2 * (jari2 + tinggi) << endl;
                break;
            case 4:
                /* code */
                cout << "Menghitung Bola : " << endl ;
                cout << "-------------------" << endl ;
                cout << "Masukkan Jari-jari  : " ; cin >> jari2; cout << endl;
                cout << "Volume Bola         : " << (4.0/3.0) * phi * jari2 * jari2 * jari2 << endl;
                cout << "Luas Permukaan Bola : " << 4 * phi * jari2 * jari2 << endl;
                break;
            case 5 :
                /* code */
                cout << "Kembali ke Menu awal" << endl;
                break;
            default:
                cout << "Pilihan tidak ada di Menu" << endl;
                break;
                }

                if (p2 >= 1 && p2 <= 4)
                {
                    cout << endl << "Tekan tombol apa saja untuk kembali ke menu awal..." << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    _getch();
                    p2 = 5;
                    system("cls");
                    break;
                }
            } while (p2 != 5);
            break;
        
        case 3:
            /* code */
            cout << "Terima Kasih...." ;
            break;
        
        default:
            cout << "Pilihan tidak ada di Menu" << endl;
            break;
        }

    } while (pilihan != 3);
    return 0;
}