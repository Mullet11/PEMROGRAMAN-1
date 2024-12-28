#include <stdio.h>

int main(){
    //variabel pertama
    float r, h;
    scanf("%f\n", &r);
    scanf("%f", &h);

float volume = 22.0/7.0 * r * r * h;
float luas = 2 * 22.0/7.0 * r * (r + h);
float keliling = 2 * 22.0/7.0 * r;

printf("Volume = %.2f\n", (volume));
printf("Luas = %.2f\n", (luas));
printf("Keliling = %.2f", (keliling));

//variabel kedua
float r1, h1;
scanf("%f", &r1);
scanf("%f", &h1);

float volume1 = 22.0/7.0 * r1 * r1 * h1;
float luas1 = 2 * 22.0/7.0 * r1 * (r1 + h1);
float keliling1 = 2 * 22.0/7.0 * r1;

printf("Volume = %.2f\n", (volume1));
printf("Luas = %.2f\n", (luas1));
printf("Keliling = %.2f", (keliling1));
return 0;
}