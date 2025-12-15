# Toolkit Asisten Laboratorium Elektro (C)

## Deskripsi Program

Program **Toolkit Asisten Laboratorium Elektro** adalah aplikasi berbasis bahasa pemograman C yang digunakan untuk membantu praktikan dan asisten laboratorium dalam melakukan verifikasi cepat perhitungan dasar pada mata kuliah **Dasar Rangkaian Elektrik** dan **Sistem Digital**.

---

## Identitas Kelompok

- **Program Studi**: Teknik Telekomunikasi  
- **Institusi**: Institut Teknologi Sepuluh Nopember (ITS)  

**Anggota Kelompok:**
1. Firyal Hasna Aqilah — NRP 5048251010  
2. Nabila Izzet Putri Ananta — NRP 5048251028  
3. Hasna Nurdiana — NRP 5048251056  

---

## Tujuan Program

Tujuan pembuatan program ini adalah:

* Memenuhi tugas mata kuliah Dasar Pemograman
* Membantu asisten laboratorium dalam melakukan pengecekan hasil perhitungan praktikan
* Menyediakan alat bantu perhitungan dasar rangkaian listrik DC
* Memahami konsep sistem bilangan (biner, oktal, heksadesimal)
* Melatih penerapan konsep pemrograman C seperti fungsi, percabangan, dan perulangan


---

## Fitur Program

### Verifikasi Rangkaian Elektrik

1. **Kalkulator Hukum Ohm**
   Menghitung Tegangan (V), Arus (I), atau Hambatan (R) berdasarkan dua besaran lainnya.

2. **Kalkulator Daya Listrik**
   Menghitung daya listrik menggunakan rumus:
   [ P = V \times I ]

3. **Kalkulator Resistor Seri**
   Menghitung total hambatan resistor yang disusun secara seri:
   [ R_{total} = R_1 + R_2 + \dots + R_n ]

4. **Kalkulator Resistor Paralel**
   Menghitung total hambatan resistor yang disusun secara paralel:
   [ R_{total} = \frac{1}{\frac{1}{R_1} + \frac{1}{R_2} + \dots + \frac{1}{R_n}} ]

---

### Utilitas Sistem Digital

5. **Konversi Desimal ke Biner, Oktal, dan Heksadesimal**
   Menggunakan metode sisa bagi.

6. **Konversi Biner ke Desimal**

7. **Konversi Oktal ke Desimal**

8. **Konversi Heksadesimal ke Desimal**
   Menggunakan metode nilai posisi.

---

## Struktur Program

Program ini disusun menggunakan beberapa fungsi utama, yaitu:

* **main()**
  Mengatur alur utama program, menampilkan menu, menerima input pengguna, serta memanggil fungsi sesuai menu yang dipilih.

* **konversiDariDesimal(int desimal, int basis)**
  Digunakan untuk mengonversi bilangan desimal ke basis lain (biner, oktal, atau heksadesimal) menggunakan perulangan dan operasi modulus.

* **konversiKeDesimal(char angka[], int basis)**
  Digunakan untuk mengonversi bilangan biner, oktal, atau heksadesimal ke desimal dengan memperhitungkan nilai posisi setiap digit.

Selain itu, program menggunakan:

* Percabangan **if - else if - else** untuk pemilihan menu
* Perulangan **do-while** untuk menjalankan menu berulang
* Perulangan **for** dan **while** untuk proses perhitungan

---

## Library yang Digunakan

```c
#include <stdio.h>   // Input dan output
#include <string.h>  // Manipulasi string
```
---

## Flowchart Program

### 1. Flowchart Utama (Main Program)

```mermaid
flowchart TD
    A([Mulai]) --> B[Tampilkan Menu Utama]
    B --> C{Input Pilihan Menu}

    C -->|1| D[Hukum Ohm]
    C -->|2| E[Daya Listrik]
    C -->|3| F[Resistor Seri]
    C -->|4| G[Resistor Paralel]
    C -->|5| H[Desimal ke Basis Lain]
    C -->|6| I[Biner ke Desimal]
    C -->|7| J[Oktal ke Desimal]
    C -->|8| K[Heksadesimal ke Desimal]
    C -->|9| L([Selesai])

    D --> M[Kembali ke Menu]
    E --> M
    F --> M
    G --> M
    H --> M
    I --> M
    J --> M
    K --> M

    M --> B
```
---

### 2. Flowchart Hukum Ohm

```mermaid
flowchart TD
    A([Mulai]) --> B[Pilih Perhitungan]
    B --> C{Pilihan}

    C -->|V| D[Input I dan R]
    D --> E[Hitung V = I * R]
    E --> F[Tampilkan V]

    C -->|I| G[Input V dan R]
    G --> H[Hitung I = V / R]
    H --> I[Tampilkan I]

    C -->|R| J[Input V dan I]
    J --> K[Hitung R = V / I]
    K --> L[Tampilkan R]

    F --> M([Kembali ke Menu])
    I --> M
    L --> M
```
---

### 3. Flowchart Daya Listrik 

```mermaid
flowchart TD
    A([Mulai]) --> B[Input Tegangan]
    B --> C[Input Arus]
    C --> D[Hitung Daya = V * I]
    D --> E[Tampilkan Daya]
    E --> F([Kembali ke Menu])
```
---

### 4. Flowchart Resistor Seri

```mermaid
flowchart TD
    A([Mulai]) --> B[Input Jumlah Resistor]
    B --> C[Input Nilai Resistor]
    C --> D[Total = Total + R]
    D --> E{Semua Resistor?}

    E -->|Belum| C
    E -->|Ya| F[Tampilkan Total Hambatan]
    F --> G([Kembali ke Menu])
```
---

### 5. Flowchart Resistor Paralel

```mermaid
flowchart TD
    A([Mulai]) --> B[Input Jumlah Resistor]
    B --> C[Input Nilai Resistor]
    C --> D[Total = Total + 1 / R]
    D --> E{Masih Ada Resistor?}

    E -->|Ya| C
    E -->|Tidak| F[Rtotal = 1 / Total]
    F --> G[Tampilkan Rtotal]
    G --> H([Kembali ke Menu])
```
---

### 6. Flowchart Konversi Bilangan

```mermaid
flowchart TD
    A([Mulai]) --> B[Pilih Jenis Konversi]

    B -->|Desimal ke Basis Lain| C[Input Bilangan Desimal]
    C --> D[Bagi dengan Basis]
    D --> E[Simpan Sisa]
    E --> F{Desimal > 0?}
    F -->|Ya| D
    F -->|Tidak| G[Tampilkan Hasil]

    B -->|Basis ke Desimal| H[Input Bilangan]
    H --> I[Ambil Digit dari Kanan]
    I --> J[Digit × Basis^Posisi]
    J --> K[Tambah ke Total]
    K --> L{Masih Ada Digit?}
    L -->|Ya| I
    L -->|Tidak| G

    G --> M([Kembali ke Menu])
```
---

## Cara Menjalankan Program

1. Pastikan compiler bahasa C telah terpasang (misalnya GCC)
2. Simpan file program, misalnya dengan nama `toolkit.c`
3. Compile program menggunakan perintah:

   ```bash
   gcc toolkit.c -o toolkit
   ```
4. Jalankan program:

   ```bash
   ./toolkit
   ```
5. Pilih menu sesuai kebutuhan dengan memasukkan angka menu yang ada

---

## Contoh Penggunaan

**Konversi Oktal ke Desimal**

```
Input  : 77
Output : 63
```

**Konversi Desimal ke Heksadesimal**

```
Input  : 255
Output : FF
```

---

## Penutup

Program **Toolkit Asisten Laboratorium Elektro** diharapkan dapat menjadi alat bantu sederhana dalam kegiatan praktikum dan pembelajaran. Program ini juga menjadi sarana latihan penerapan konsep dasar pemrograman C.
Terima kasih.

---


