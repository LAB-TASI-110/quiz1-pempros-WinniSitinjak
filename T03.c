#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    int jumlah;

    printf("===== SISTEM LAUNDRY =====\n");
    printf("Masukkan nama customer: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan jumlah baju: ");
    scanf("%d", &jumlah);

    // Deklarasi array
    char warna[jumlah][30];
    char bahan[jumlah][30];
    char kondisi[jumlah][30];
    char perawatan[jumlah][50];

    for(int i = 0; i < jumlah; i++) {
        printf("\n--- Data Baju ke-%d ---\n", i+1);

        printf("Warna baju: ");
        scanf("%s", warna[i]);

        printf("Jenis bahan (katun/rajut/dll): ");
        scanf("%s", bahan[i]);

        printf("Kondisi (tidak_bernoda/noda_lengket/noda_membandel/luntur/robek): ");
        scanf("%s", kondisi[i]);

        // Proses klasifikasi
        if(strcmp(kondisi[i], "robek") == 0) {
            strcpy(perawatan[i], "Tidak dibersihkan (dipulangkan)");
        }
        else if(strcmp(kondisi[i], "tidak_bernoda") == 0 && strcmp(bahan[i], "katun") == 0) {
            strcpy(perawatan[i], "Dicuci menggunakan mesin cuci");
        }
        else if(strcmp(kondisi[i], "noda_lengket") == 0 || strcmp(kondisi[i], "noda_membandel") == 0) {
            strcpy(perawatan[i], "Dibersihkan menggunakan OXY");
        }
        else if(strcmp(kondisi[i], "luntur") == 0 || strcmp(bahan[i], "rajut") == 0) {
            strcpy(perawatan[i], "Dicuci manual");
        }
        else {
            strcpy(perawatan[i], "Perawatan standar");
        }
    }

    // Output
    printf("\n===== HASIL LAUNDRY =====\n");
    printf("Nama Customer: %s", nama);
    printf("Jumlah Baju: %d\n\n", jumlah);

    for(int i = 0; i < jumlah; i++) {
        printf("Baju ke-%d\n", i+1);
        printf("Warna : %s\n", warna[i]);
        printf("Perawatan : %s\n\n", perawatan[i]);
    }

    return 0;
}