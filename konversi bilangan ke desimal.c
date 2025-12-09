#include <stdio.h>

int main() {
    char angka[100];
    int basis;
    long long desimal;
    int panjang, posisi;

    do {
        printf("Konversi Bilangan ke Desimal\n");

        printf("Masukkan bilangan (biner / oktal / heksadesimal): ");
        scanf("%s", angka);

        printf("Masukkan basis bilangan (2 / 8 / 16): ");
        scanf("%d", &basis);

        desimal = 0;
        panjang = 0;
        posisi = 0;

        while (angka[panjang] != '\0') {
            panjang++;
        }

        for (int i = panjang - 1; i >= 0; i--) {
            char c = angka[i];
            int nilaiDigit;

            if (c >= '0' && c <= '9') {
                nilaiDigit = c - '0';
            } else if (c >= 'A' && c <= 'F') {
                nilaiDigit = 10 + (c - 'A');
            } else if (c >= 'a' && c <= 'f') {
                nilaiDigit = 10 + (c - 'a');
            } else {
                printf("\nDigit tidak valid!\n");
                nilaiDigit = -1;
            }

            if (nilaiDigit < 0 || nilaiDigit >= basis) {
                printf("\nDigit '%c' tidak cocok dengan basis %d!\n", c, basis);
                desimal = -1;
                break;
            }

            long long pangkat = 1;
            for (int j = 0; j < posisi; j++) {
                pangkat *= basis;
            }

            desimal += nilaiDigit * pangkat;
            posisi++;
        }

        if (desimal >= 0) {
            printf("\n>>> Hasil dalam Desimal = %lld\n", desimal);
        }

        printf("\nTekan Enter untuk kembali ke menu utama...");
        getchar();  // buang sisa newline
        getchar();  // tunggu Enter

        printf("\n");

    } while (1);

    return 0;
}
