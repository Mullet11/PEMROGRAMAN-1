#include <stdio.h>
int main (){
    char nama[100], NIM[100], kelas[100], TTL[100], alamat[100], hobby[100], no_hp[100];

    printf("Nama                    :");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                     :");
    fgets(NIM, sizeof(NIM), stdin);          
    printf("Kelas Paralel           :");
    fgets(kelas, sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir    :");
    fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat                  :");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                   :");
    fgets(hobby, sizeof(hobby), stdin);
    printf("NO. HP                  :");
    fgets(no_hp, sizeof(no_hp), stdin);
    printf("\n");

printf("Nama                    : %s", nama);
printf("NIm                     : %s", NIM);
printf("Kelas Paralel           : %s", kelas);
printf("Tempat/Tanggal Lahir    : %s", TTL);
printf("Alamat                  : %s", alamat);
printf("Hobby                   : %s", hobby);
printf("No. HP                  : %s", no_hp);
return 0;
}