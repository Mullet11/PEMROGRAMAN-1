#include <stdio.h>
#include <math.h>

int main(){
    //Variabel pertama
    float A, B, C, keliling, Luas;

    scanf("%f", &A);
    scanf("%f", &B);

    C = sqrt(B * B - A * A);
    keliling = A + B + C;
    Luas = (A * C) / 2;

    printf("Alas = %d cm\n", (int)C);
    printf("Tinggi = %d cm\n", (int)A);
    printf("Keliling = %d cm\n", (int)keliling);
    printf("Luas : %d cm^2\n", (int)Luas);

    //variabel kedua
     float A1, B1, C1, keliling1, Luas1;

     scanf("%f", &A1);
    scanf("%f", &B1);

    C1 = sqrt(B1 * B1 - A1 * A1);
    keliling1 = A1 + B1 + C1;
    Luas1 = (A1 * C1) / 2;

    printf("Alas = %d cm\n", (int)C1);
    printf("Tinggi = %d cm\n", (int)A1);
    printf("Keliling = %d cm\n", (int)keliling1);
    printf("Luas : %d cm^2\n", (int)Luas1);

    return 0;
}