#include <stdio.h>

int main(){
    //test case 1
    float a, b;
    printf("Masukkan nilai Pertama: ");
    scanf("%f", &a);
    printf("masukkan nilai Kedua: ");
    scanf("%f", &b);
    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", a, b, a + b);
    printf("\n");
    //test case 2
    float x, y;
    printf("Masukkan nilai pertama: ");
    scanf("%f", &x);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &y);
    printf("Hasil dari penjumlahan nilai pertama\"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", x, y, x + y);
    return 0;
}