#include <stdio.h>

int main(){
    float putaran = 5;
    float jarak_total = 14;
    float jarijari = jarak_total / (2 * 3.14 * 5);

    printf("DIketahui :\n");
    printf("Pak Dengklek mengelilingi taman %.f putaran\n", putaran);
    printf("jarak tempuh Pak Dengklek %.f Kilometer\n", jarak_total);
printf("\n");
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi pak dengklek adalah %.2f kilometer\n", jarijari);
return 0;
}