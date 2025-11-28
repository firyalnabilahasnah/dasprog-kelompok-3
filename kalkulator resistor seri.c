#include <stdio.h>

int main() {
    int n, i;
    double R, total = 0;

    do {
        printf("Kalkulator Resistor Seri\n");
        printf("Masukkan jumlah resistor: ");
        scanf("%d", &n);

        total = 0;

        for (i = 1; i <= n; i++) {
            printf("Masukkan nilai Resistor %d (Ohm): ", i);
            scanf("%lf", &R);
            total += R;
        }

        printf("\n>>> Total Hambatan Seri = %.2lf Ohm\n", total);

        printf("\nTekan Enter untuk kembali ke menu utama...");
        getchar();
        getchar();

    } while (1);

    return 0;
}
