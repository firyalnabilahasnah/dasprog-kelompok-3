#include <stdio.h>

int main() {
    char pilihan;
    double V, I, R;

    do {
        printf("Kalkulator Hukum Ohm (V = I x R)\n");
        printf("Mau menghitung apa? (V/I/R): ");
        scanf(" %c", &pilihan);
        
        if (pilihan == 'V') {
            printf("Masukkan Arus I (Ampere): ");
            scanf("%lf", &I);
            printf("Masukkan Hambatan R (Ohm): ");
            scanf("%lf", &R);
            V = I * R;
            printf("\n>>> Tegangan V = %.2lf Volt\n", V);
        }
        else if (pilihan == 'I') {
            printf("Masukkan Tegangan V (Volt): ");
            scanf("%lf", &V);
            printf("Masukkan Hambatan R (Ohm): ");
            scanf("%lf", &R);
            I = V / R;
            printf("\n>>> Arus I = %.2lf Ampere\n", I);
        }
        else if (pilihan == 'R') {
            printf("Masukkan Tegangan V (Volt): ");
            scanf("%lf", &V);
            printf("Masukkan Arus I (Ampere): ");
            scanf("%lf", &I);
            R = V / I;
            printf("\n>>> Hambatan R = %.2lf Ohm\n", R);
        }
        else {
            printf("Input tidak valid! Gunakan huruf besar: V / I / R.\n");
        }

        printf("\nTekan Enter untuk kembali ke menu utama...");
        getchar();
        getchar();

    } while (1);

    return 0;
}
