# Toolkit Asisten Laboratorium Elektro (C)

Program **Toolkit Asisten Laboratorium Elektro** adalah aplikasi kalkulator berbasis bahasa pemograman C yang digunakan untuk membantu praktikan dan asisten laboratorium dalam melakukan verifikasi cepat perhitungan dasar pada mata kuliah **Dasar Rangkaian Elektrik** dan **Sistem Digital**.

## Identitas Kelompok

- **Program Studi**: Teknik Telekomunikasi  
- **Institusi**: Institut Teknologi Sepuluh Nopember (ITS)  

**Anggota Kelompok:**
1. Firyal Hasna Aqilah — NRP 5048251010  
2. Nabila Izzet Putri Ananta — NRP 5048251028  
3. Hasna Nurdiana — NRP 5048251056  

## Pembagian Tugas 
1. **Firyal**
   Menghitung Tegangan (V), Arus (I), atau Hambatan (R) berdasarkan dua besaran lainnya.

2. **Nabila**
   Menghitung daya listrik menggunakan rumus: P=V*I

3. **Hasnah**
   Menghitung total hambatan resistor yang disusun secara seri:
   [ R_{total} = R_1 + R_2 + \dots + R_n ]

### Verifikasi Rangkaian Elektrik
1. **Kalkulator Hukum Ohm**
   Menghitung Tegangan (V), Arus (I), atau Hambatan (R) berdasarkan dua besaran lainnya.
2. **Kalkulator Daya Listrik**
   Menghitung daya listrik menggunakan rumus: P = V*I
3. **Kalkulator Resistor Seri**
   Menghitung total hambatan resistor yang disusun secara seri: Rtotal = R1+R2+...+Rn
4. **Kalkulator Resistor Paralel**
   Menghitung total hambatan resistor yang disusun secara paralel: Rtotal = 1/R1+1/R2+...+Rn

### Utilitas Sistem Digital
5. **Konversi Desimal ke Biner, Oktal, dan Heksadesimal**
   Menggunakan metode sisa bagi.
6. **Konversi Biner ke Desimal**
7. **Konversi Oktal ke Desimal**
8. **Konversi Heksadesimal ke Desimal**
   Menggunakan metode nilai posisi.

## Struktur Program

* **main()**
  Mengatur alur utama program, menampilkan menu, menerima input, memanggil fungsi sesuai menu yang dipilih.
* **konversiDariDesimal(int desimal, int basis)**
  Untuk mengonversi bilangan desimal ke basis lain (biner, oktal, atau heksadesimal) menggunakan perulangan dan algoritma sisa bagi.
* **konversiKeDesimal(char angka[], int basis)**
  Untuk mengonversi bilangan biner, oktal, atau heksadesimal ke desimal (menggunakan algoritma nilai posisi setiap digit).

* Percabangan **if - else if - else** untuk pemilihan menu
* Perulangan **do-while** untuk menjalankan menu berulang
* Perulangan **for** dan **while** untuk proses perhitungan

## Library yang Digunakan
```c
#include <stdio.h>   // Input dan output
#include <string.h>  // Manipulasi string
```
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
