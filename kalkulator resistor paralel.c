#include <stdio.h>

int main() {
    int n, i;
    double R, totalKebalikan = 0, total;

    do {
        printf("Kalkulator Resistor Paralel\n");
        printf("Masukkan jumlah resistor: ");
        scanf("%d", &n);

        totalKebalikan = 0;

        for (i = 1; i <= n; i++) {
            printf("Masukkan nilai Resistor %d (Ohm): ", i);
            scanf("%lf", &R);
            totalKebalikan += 1.0 / R;
        }

        total = 1.0 / totalKebalikan;
        printf("\n>>> Total Hambatan Paralel = %.2lf Ohm\n", total);

        printf("\nTekan Enter untuk kembali ke menu utama...");
        getchar();
        getchar();

    } while (1);

    return 0;
}
