#include <stdio.h>

void konversi(int desimal, int basis) {
    int sisa, hasil[50], i = 0;

    if (desimal == 0) {
        printf("0");
        return;
    }

    while (desimal > 0) {
        sisa = desimal % basis;
        hasil[i] = sisa;
        desimal = desimal / basis;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        if (basis == 16 && hasil[j] >= 10) {
            printf("%c", 'A' + (hasil[j] - 10));
        } else {
            printf("%d", hasil[j]);
        }
    }
}

int main() {
    int desimal;

    do {
        printf("Konversi Bilangan Desimal\n");
        printf("Masukkan bilangan desimal: ");
        scanf("%d", &desimal);

        printf("\n>>> Hasil Konversi\n");

        printf("Biner (basis 2)        : ");
        konversi(desimal, 2);

        printf("\nOktal (basis 8)        : ");
        konversi(desimal, 8);

        printf("\nHeksadesimal (basis 16): ");
        konversi(desimal, 16);

        printf("\n");

        printf("\nTekan Enter untuk kembali ke menu utama...");
        getchar();
        getchar();

    } while (1);

    return 0;
}
