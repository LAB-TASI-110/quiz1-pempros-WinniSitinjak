#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int porsi;
    int harga = 0;
    int totalItem;
    int totalBayar = 0;
    float diskon = 0;
    float totalAkhir;

    printf("Masukkan Kode Menu (ketik END untuk selesai)\n");

    while (1) {

        printf("\nKode Menu: ");
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        printf("Jumlah Porsi: ");
        scanf("%d", &porsi);

        // Menentukan harga berdasarkan kode
        if (strcmp(kode, "NGS") == 0) {
            harga = 15000;
            printf("Nasi Goreng Spesial");
        }
        else if (strcmp(kode, "AP") == 0) {
            harga = 20000;
            printf("Ayam Penyet");
        }
        else if (strcmp(kode, "SA") == 0) {
            harga = 25000;
            printf("Sate Ayam");
        }
        else if (strcmp(kode, "BU") == 0) {
            harga = 18000;
            printf("Bakso Urat");
        }
        else if (strcmp(kode, "MAP") == 0) {
            harga = 15000;
            printf("Mie Ayam Pangsit");
        }
        else if (strcmp(kode, "GG") == 0) {
            harga = 15000;
            printf("Gado-Gado");
        }
        else if (strcmp(kode, "SAM") == 0) {
            harga = 17000;
            printf("Soto Ayam");
        }
        else if (strcmp(kode, "RD") == 0) {
            harga = 25000;
            printf("Rendang Daging");
        }
        else if (strcmp(kode, "IB") == 0) {
            harga = 35000;
            printf("Ikan Bakar");
        }
        else if (strcmp(kode, "NUK") == 0) {
            harga = 20000;
            printf("Nasi Uduk Komplit");
        }
        else {
            printf("Kode tidak ditemukan!");
            continue;
        }

        totalItem = harga * porsi;
        totalBayar += totalItem;

        printf(" | %d x %d = %d\n", porsi, harga, totalItem);
    }

    // Menentukan diskon
    if (totalBayar >= 500000)
        diskon = 0.25;
    else if (totalBayar >= 400000)
        diskon = 0.20;
    else if (totalBayar >= 300000)
        diskon = 0.15;
    else if (totalBayar >= 200000)
        diskon = 0.10;
    else if (totalBayar >= 100000)
        diskon = 0.05;

    totalAkhir = totalBayar - (totalBayar * diskon);

    printf("\n=============================");
    printf("\nTotal Bayar   : %d", totalBayar);
    printf("\nDiskon        : %.0f%%", diskon * 100);
    printf("\nTotal Akhir   : %.0f", totalAkhir);
    printf("\n=============================\n");

    return 0;
}