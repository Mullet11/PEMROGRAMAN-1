#include <stdio.h>
int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom];

    for (int baris_2 = 0; baris_2 < baris; ++baris_2)
        for (int kolom_2 = 0; kolom_2 < kolom; ++kolom_2)
            scanf("%d", &matriks[baris_2][kolom_2]);

    for (int baris_2 = 0; baris_2 < baris; ++baris_2, printf("\n"))
        for (int kolom_2 = 0; kolom_2 < kolom; ++kolom_2)
            printf("%d ", matriks[baris_2][kolom_2]);
    return 0;
}