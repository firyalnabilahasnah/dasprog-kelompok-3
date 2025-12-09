#include <stdio.h>
#include <string.h>
#include <math.h>

// konversi desimal ke basis lain
void konversiDariDesimal(int desimal, int basis) {
    int sisa, hasil[50], i = 0;

    if (desimal == 0) {
        printf("0");
        return;
    }

    while (desimal > 0) {
        sisa = desimal % basis;
        hasil[i++] = sisa;
        desimal /= basis;
    }

    for (int j = i - 1; j >= 0; j--) {
        if (basis == 16 && hasil[j] >= 10)
            printf("%c", 'A' + (hasil[j] - 10));
        else
            printf("%d", hasil[j]);
    }
}

// konversi biner/oktal/heksa ke desimal
long long konversiKeDesimal(char angka[], int basis) {
    long long desimal = 0;
    int panjang = strlen(angka);
    int posisi = 0;

    for (int i = panjang - 1; i >= 0; i--) {
        char c = angka[i];
        int digit;

        if (c >= '0' && c <= '9') digit = c - '0';
        else if (c >= 'A' && c <= 'F') digit = 10 + (c - 'A');
        else if (c >= 'a' && c <= 'f') digit = 10 + (c - 'a');
        else return -2;  // digit tidak valid

        if (digit >= basis) return -3; // digit tidak cocok basis

        long long pangkat = 1;
        for (int j = 0; j < posisi; j++) pangkat *= basis;

        desimal += digit * pangkat;
        posisi++;
    }

    return desimal;
}

int main() {
    int menu;

    do {
        printf("=====================================================================\n");
        printf("|               Toolkit Asisten Laboratorium Elektro                |\n");
        printf("=====================================================================\n");
        printf("| --- Verifikasi Rangkaian Elektrik ---                             |\n");
        printf("|  1. Kalkulator Hukum Ohm (V = I * R)                              |\n");
        printf("|  2. Kalkulator Daya Listrik (P = V * I)                           |\n");
        printf("|  3. Kalkulator Resistor Seri                                      |\n");
        printf("|  4. Kalkulator Resistor Paralel                                   |\n");
        printf("|                                                                   |\n");
        printf("| --- Utilitas Sistem Digital ---                                   |\n");
        printf("|  5. Desimal -> Biner / Oktal / Heksadesimal                       |\n");
        printf("|  6. Biner -> Desimal                                              |\n");
        printf("|  7. Oktal -> Desimal                                              |\n");
        printf("|  8. Heksadesimal -> Desimal                                       |\n");
        printf("|                                                                   |\n");
        printf("|  9. Keluar                                                        |\n");
        printf("=====================================================================\n");
        printf("Pilih menu: ");
        scanf("%d", &menu);

        // menu 1: hukum ohm
        if (menu == 1) {
            char p;
            double V, I, R;

            printf("\nKalkulator Hukum Ohm\n");
            printf("Mau menghitung apa? (V/I/R): ");
            scanf(" %c", &p);

            if (p == 'V') {
                printf("Masukkan arus I (A): ");
                scanf("%lf", &I);
                printf("Masukkan hambatan R (Ohm): ");
                scanf("%lf", &R);
                V = I * R;
                printf("\n>>> Tegangan V = %.2lf Volt\n", V);
            }
            else if (p == 'I') {
                printf("Masukkan tegangan V (Volt): ");
                scanf("%lf", &V);
                printf("Masukkan hambatan R (Ohm): ");
                scanf("%lf", &R);
                I = V / R;
                printf("\n>>> Arus I = %.2lf Ampere\n", I);
            }
            else if (p == 'R') {
                printf("Masukkan tegangan V (Volt): ");
                scanf("%lf", &V);
                printf("Masukkan arus I (Ampere): ");
                scanf("%lf", &I);
                R = V / I;
                printf("\n>>> Hambatan R = %.2lf Ohm\n", R);
            }
            else {
                printf("Input tidak valid\n");
            }
        }

        // menu 2: daya listrik
        else if (menu == 2) {
            double V, I, P;

            printf("\nKalkulator Daya Listrik\n");
            printf("Masukkan tegangan V (Volt): ");
            scanf("%lf", &V);
            printf("Masukkan arus I (Ampere): ");
            scanf("%lf", &I);

            P = V * I;
            printf("\n>>> Daya Listrik P = %.2lf Watt\n", P);
        }

        // menu 3: resistor seri
        else if (menu == 3) {
            int n;
            double R, total = 0;

            printf("\nKalkulator Resistor Seri\n");
            printf("Masukkan jumlah resistor: ");
            scanf("%d", &n);

            for (int i = 1; i <= n; i++) {
                printf("Resistor %d (Ohm): ", i);
                scanf("%lf", &R);
                total += R;
            }

            printf("\n>>> Total Hambatan Seri = %.2lf Ohm\n", total);
        }

        // menu 4: resistor paralel
        else if (menu == 4) {
            int n;
            double R, totalK = 0;

            printf("\nKalkulator Resistor Paralel\n");
            printf("Masukkan jumlah resistor: ");
            scanf("%d", &n);

            for (int i = 1; i <= n; i++) {
                printf("Resistor %d (Ohm): ", i);
                scanf("%lf", &R);
                totalK += 1.0 / R;
            }

            double total = 1.0 / totalK;
            printf("\n>>> Total Hambatan Paralel = %.2lf Ohm\n", total);
        }

        // menu 5: desimal -> basis lain
        else if (menu == 5) {
            int d;

            printf("\nKonversi Desimal ke Basis Lain\n");
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &d);

            printf("\n>>> Biner        : ");
            konversiDariDesimal(d, 2);

            printf("\n>>> Oktal        : ");
            konversiDariDesimal(d, 8);

            printf("\n>>> Heksadesimal : ");
            konversiDariDesimal(d, 16);

            printf("\n");
        }

        // menu 6: biner -> desimal
        else if (menu == 6) {
            char angka[100];

            printf("\nKonversi Biner ke Desimal\n");
            printf("Masukkan bilangan: ");
            scanf("%s", angka);

            long long hasil = konversiKeDesimal(angka, 2);

            if (hasil >= 0)
                printf("\n>>> Hasil Desimal = %lld\n", hasil);
            else
                printf("\nDigit tidak valid atau tidak sesuai basis\n");
        }

        // menu 7: oktal -> desimal
        else if (menu == 7) {
            char angka[100];

            printf("\nKonversi Oktal ke Desimal\n");
            printf("Masukkan bilangan: ");
            scanf("%s", angka);

            long long hasil = konversiKeDesimal(angka, 8);

            if (hasil >= 0)
                printf("\n>>> Hasil Desimal = %lld\n", hasil);
            else
                printf("\nDigit tidak valid atau tidak sesuai basis\n");
        }

        // menu 8: heksadesimal -> desimal
        else if (menu == 8) {
            char angka[100];

            printf("\nKonversi Heksadesimal ke Desimal\n");
            printf("Masukkan bilangan: ");
            scanf("%s", angka);

            long long hasil = konversiKeDesimal(angka, 16);

            if (hasil >= 0)
                printf("\n>>> Hasil Desimal = %lld\n", hasil);
            else
                printf("\nDigit tidak valid atau tidak sesuai basis\n");
        }

        // menu 9: keluar
        else if (menu == 9) {
            printf("\nProgram selesai\n");
            break;
        }

        else {
            printf("\nMenu tidak valid\n");
        }

        printf("\nTekan Enter untuk kembali ke menu...");
        getchar();
        getchar();
        printf("\n");

    } while (1);

    return 0;
}
