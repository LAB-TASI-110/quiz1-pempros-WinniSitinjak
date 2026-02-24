#include <stdio.h>

int main() {
    int N;
    int nilai[100];
    char kode;
    int total = 0;

    // Input jumlah data
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    // Input deret nilai
    for(int i = 0; i < N; i++) {
        printf("Nilai ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
    }

    // Input kode kelompok
    printf("Masukkan kode kelompok (A/B): ");
    scanf(" %c", &kode);

    // Proses perhitungan
    for(int i = 0; i < N; i++) {
        if(kode == 'A' || kode == 'a') {
            if(nilai[i] >= 75) {
                total += nilai[i];
            }
        }
        else if(kode == 'B' || kode == 'b') {
            if(nilai[i] < 75) {
                total += nilai[i];
            }
        }
    }

    // Output hasil
    printf("Total nilai kelompok %c = %d\n", kode, total);

    return 0;
}