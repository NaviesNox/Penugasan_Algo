# Penugasan Algoritma dan Pemrograman

Repository ini digunakan untuk menyimpan dan melacak tugas-tugas mata kuliah **Algoritma dan Pemrograman**.

## Tujuan Repository

- Menyimpan seluruh source code tugas secara terstruktur.
- Mendokumentasikan materi dan topik yang dikerjakan.
- Memantau status pengerjaan setiap tugas.
- Menjadi arsip perkembangan pembelajaran pemrograman dasar menggunakan C++.

## Struktur Repository

```text
Penugasan_Algo/
├── tugas1/
│   ├── perbandingan.cpp
│   ├── T2_123260126_1.cpp
│   └── T2_123260126_2.cpp
├── tugas2/
│   ├── 01_sistem_menu_restoran.cpp
│   ├── 02_kalkulator_menu.cpp
│   ├── 03_penerimaan_mahasiswa.cpp
│   └── 04_sistem_kasir versi5.cpp
├── tugas3/
│   └── 123260126_TUlang.cpp
└── README.md
```

> File berekstensi `.exe`, `.obj`, dan file hasil kompilasi lainnya tidak perlu diedit secara manual. Source code utama berada pada file `.cpp`.

## Progress Tugas

| Tugas | Topik | Status | Catatan |
|---|---|---|---|
| Tugas 1 | Perbandingan nilai dan latihan dasar C++ | Selesai | Source code tersedia di folder [`tugas1`](tugas1) |
| Tugas 2 | Percabangan `if` dan sistem berbasis menu | Selesai | Terdapat 4 program pada folder [`tugas2`](tugas2) |
| Tugas 3 | Program latihan lanjutan | selesai | Source code tersedia di folder [`tugas3`](tugas3) |

### Keterangan Status

- `Belum dimulai`: tugas belum dikerjakan.
- `Dalam pengembangan`: tugas sedang dikerjakan atau masih memerlukan perbaikan.
- `Selesai`: source code sudah dibuat dan dapat dijalankan.
- `Dikumpulkan`: tugas sudah siap atau telah dikumpulkan.

## Daftar Program

### Tugas 1

- [`perbandingan.cpp`](tugas1/perbandingan.cpp) - Program perbandingan.
- [`T2_123260126_1.cpp`](tugas1/T2_123260126_1.cpp) - Latihan tugas 1.
- [`T2_123260126_2.cpp`](tugas1/T2_123260126_2.cpp) - Latihan tugas 2.

### Tugas 2

- [`01_sistem_menu_restoran.cpp`](tugas2/01_sistem_menu_restoran.cpp) - Sistem menu restoran.
- [`02_kalkulator_menu.cpp`](tugas2/02_kalkulator_menu.cpp) - Kalkulator berbasis menu.
- [`03_penerimaan_mahasiswa.cpp`](tugas2/03_penerimaan_mahasiswa.cpp) - Simulasi penerimaan mahasiswa.
- [`04_sistem_kasir versi5.cpp`](tugas2/04_sistem_kasir%20versi5.cpp) - Sistem kasir.

### Tugas 3

- [`123260126_TUlang.cpp`](tugas3/123260126_TUlang.cpp) - Program latihan tugas 3.

## Cara Menjalankan Program

Pastikan compiler C++ seperti **G++**, **MinGW**, atau compiler lain sudah terpasang.

```bash
g++ "nama_file.cpp" -o program
./program
```

Contoh:

```bash
g++ "tugas2/01_sistem_menu_restoran.cpp" -o menu-restoran
./menu-restoran
```

Pada Windows, program hasil kompilasi dapat dijalankan dengan:

```powershell
g++ "tugas2/01_sistem_menu_restoran.cpp" -o menu-restoran.exe
./menu-restoran.exe
```

## Checklist Pengumpulan

- [ ] Source code sudah dapat dikompilasi tanpa error.
- [ ] Program sudah diuji dengan beberapa input.
- [ ] Nama file dan folder sudah sesuai.
- [ ] Output program sudah sesuai soal.
- [ ] Status tugas sudah diperbarui pada tabel progress.

## Catatan Pengembangan

Setiap perubahan tugas sebaiknya disimpan dalam commit yang menjelaskan perubahan, misalnya:

```text
Tambah program sistem kasir pada tugas 2
Perbaiki validasi input tugas 3
```

---

Repository pembelajaran Algoritma dan Pemrograman.
