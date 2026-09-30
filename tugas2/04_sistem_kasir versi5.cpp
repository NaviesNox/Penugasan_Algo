#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int k, j;
    double total = 0, diskon, bayar, uang;
    cout << "1. Buku (10k) 2. Pulpen (5k) 3. Tas (150k) 4. Sepatu (300k) 5. Jaket (200k)\n\n";
    // --- Input 1 ---
    cout << "Input 1 (Kode & Jumlah): "; cin >> k >> j;
    switch(k) {
        case 1: total += 10000 * j; break;
        case 2: total += 5000 * j; break;
        case 3: total += 150000 * j; break;
        case 4: total += 300000 * j; break;
        case 5: total += 200000 * j; break;
    }
    // --- Input 2 ---
    cout << "Input 2 (Kode & Jumlah): "; cin >> k >> j;
    switch(k) {
        case 1: total += 10000 * j; break;
        case 2: total += 5000 * j; break;
        case 3: total += 150000 * j; break;
        case 4: total += 300000 * j; break;
        case 5: total += 200000 * j; break;
    }
    // --- Input 3 ---
    cout << "Input 3 (Kode & Jumlah): "; cin >> k >> j;
    switch(k) {
        case 1: total += 10000 * j; break;
        case 2: total += 5000 * j; break;
        case 3: total += 150000 * j; break;
        case 4: total += 300000 * j; break;
        case 5: total += 200000 * j; break;
    }
    cout << "Input 4 (Kode & Jumlah): "; cin >> k >> j;
    switch(k) {
        case 1: total += 10000 * j; break;
        case 2: total += 5000 * j; break;
        case 3: total += 150000 * j; break;
        case 4: total += 300000 * j; break;
        case 5: total += 200000 * j; break;
    }
    cout << "Input 5 (Kode & Jumlah): "; cin >> k >> j;
    switch(k) {
        case 1: total += 10000 * j; break;
        case 2: total += 5000 * j; break;
        case 3: total += 150000 * j; break;
        case 4: total += 300000 * j; break;
        case 5: total += 200000 * j; break;
    }
    // cout << "Subtotal : Rp" << total << endl;
    // Diskon
    if (total >= 500000) diskon = 0.15 * total;
    else if (total >= 250000) diskon = 0.10 * total;
    else if (total >= 100000) diskon = 0.05 * total;
    else diskon = 0;
    bayar = total - diskon;
    cout
         << "\nSubtotal: Rp " << total << " | Diskon: Rp " << diskon << " | Total Bayar: Rp " << bayar
         << "\nUang Bayar: Rp "; cin >> uang;
    if (uang >= bayar) cout << "Kembalian: Rp " << (uang - bayar) << "\n";
    else cout << "Kurang: Rp " << (bayar - uang) << "\n";
    return 0;
}