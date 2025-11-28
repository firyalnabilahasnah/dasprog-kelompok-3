#include <stdio.h>

int main() {
    double V, I, P;

    do {
        printf("Kalkulator Daya Listrik (P = V x I)\n");
        printf("Masukkan Tegangan V (Volt): ");
        scanf("%lf", &V);
        printf("Masukkan Arus I (Ampere): ");
        scanf("%lf", &I);

        P = V * I;
        printf("\n>>> Daya Listrik P = %.2lf Watt\n", P);

        printf("\nTekan Enter untuk kembali ke menu utama...");
        getchar();
        getchar();

    } while (1);

    return 0;
}
