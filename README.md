## Toolkit Asisten Laboratorium Elektro (C)

Program **Toolkit Asisten Laboratorium Elektro** adalah aplikasi kalkulator berbasis bahasa pemograman C yang digunakan untuk membantu praktikan dan asisten laboratorium dalam melakukan verifikasi cepat perhitungan dasar pada mata kuliah **Dasar Rangkaian Elektrik** dan **Sistem Digital**.

**Anggota Kelompok:**
1. Firyal Hasna Aqilah — NRP 5048251010  
2. Nabila Izzet Putri Ananta — NRP 5048251028  
3. Hasnah Nurdiana — NRP 5048251056  

- **Program Studi**: Teknik Telekomunikasi  
- **Institusi**: Institut Teknologi Sepuluh Nopember (ITS)

- 
### Pembagian Tugas 
1. **Firyal**
   * **Merancang Menu dan Alur Program Keseluruhan**
   * **Kalkulator  Hukum Ohm**
   * **Kalkulator Daya Listrik**
   * **Konversi Desimal ke Biner, Oktal, Heksadesimal**

2. **Nabila**
   * **Konversi Biner ke Desimal**
   * **Konversi Oktal ke Desimal**
   * **Konversi Heksadesimal ke Desimal**

3. **Hasnah**
   * **Kalkulator Rangkaian Seri**
   * **Kalkulator Rangkaian Paralel**

### Penjelasan Sesuai Pembagian Tugas
1. **Kalkulator Hukum Ohm**
   Kalkulator ini dipakai untuk menghitung tegangan (V), arus (I), atau hambatan (R). Pengguna nanti memilih mau menghitung yang apa, lalu diminta memasukkan dua nilai lainnya. Program langsung menghitung menggunakan rumus Hukum Ohm dan hasilnya ditampilkan di layar.
2. **Kalkulator Daya Listrik**
   Kalkulator ini meminta pengguna masukkan nilai tegangan (V) dan arus (I), lalu program akan menghitung daya listriknya (P). Rumus yang dipakai sederhana: P= V*I, jadi hasilnya bisa langsung dilihat dalam satuan watt.
3. **Kalkulator Rangkaian Seri**
   Di menu rangkaian seri, program akan menghitung total hambatan dari beberapa resistor yang disusun satu jalur. Cara kerjanya simpel: semua nilai resistor langsung dijumlahkan. Arusnya sama di semua resistor, tapi kalau satu putus, hasilnya ikut nol alias nggak jalan.
4. **Kalkulator Rangkaian Paralel**
   Di menu rangkaian paralel, program menghitung total hambatan dari resistor yang disusun bercabang. Perhitungannya pakai kebalikan hambatan, jadi hasil akhirnya lebih kecil dari hambatan terkecil. Kelebihannya, kalau satu cabang bermasalah, cabang lain tetap aman.
5. **Konversi Desimal ke Biner, Oktal, dan Heksadesimal**
   Menu konversi ini dipakai untuk mengubah bilangan desimal ke bentuk biner, oktal, dan heksadesimal sekaligus. Jadi pengguna diminta memasukkan hanya angka desimalnya, nanti program langsung menampilkan hasil konversinya ke bentuk biner, oktal, heksadesimal. Fungsi perhitungannya menggunakan sisa bagi algoritma sisa bagi atau operator modulus.
6. **Konversi Biner ke Desimal**
   Program ini mengubah bilangan biner yang dimasukkan pengguna menjadi bentuk desimal.
7. **Konversi Oktal ke Desimal**
   Program ini mengubah bilangan oktal yang dimasukkan pengguna menjadi bentuk desimal.
9. **Konversi Heksadesimal ke Desimal**
   Program ini mengubah bilangan heksadesimal yang dimasukkan pengguna menjadi bentuk desimal menggunakan metode nilai posisi.

### Struktur Program
* **main()**
  Mengatur alur utama program, menampilkan menu, menerima input, memanggil fungsi sesuai menu yang dipilih.
* **konversiDariDesimal(int desimal, int basis)**
  Untuk mengonversi bilangan desimal ke basis lain (biner, oktal, atau heksadesimal) menggunakan perulangan dan algoritma sisa bagi.
* **konversiKeDesimal(char angka[], int basis)**
  Untuk mengonversi bilangan biner, oktal, atau heksadesimal ke desimal (menggunakan algoritma nilai posisi setiap digit).

* Percabangan **if - else if - else** untuk pemilihan menu
* Perulangan **do-while** untuk menjalankan menu berulang
* Perulangan **for** dan **while** untuk proses perhitungan

### Library 
```c
#include <stdio.h>   // Input dan output
#include <string.h>  // Manipulasi string
```
### Contoh Penggunaan
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





