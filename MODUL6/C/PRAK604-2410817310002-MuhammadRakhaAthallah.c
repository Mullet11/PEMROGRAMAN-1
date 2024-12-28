#include <stdio.h>
#include <string.h>

int main() {
    char str1[1002], str2[1002], str3[1002];
    int char_sama = 0, char_tidaksama = 0;

    fgets(str1, 1002, stdin);
    fgets(str2, 1002, stdin);

    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 != len2) {
        printf("Panjang kalimat berbeda,pesan palsu\n");
        return 1;
    }
    for (int i = 0; i < len1 - 1; i++) {
        if (str1[i] == str2[i]) {
            str3[i] = (str1[i] == ' ') ? ' ' : '*', char_sama++;
        } else {
            str3[i] = '#', char_tidaksama++;
        }
        printf("%c", str3[i]);
    }
    printf("\n* = %d\n# = %d\n%s\n", char_sama, char_tidaksama, 
           char_sama >= char_tidaksama ? "Pesan Asli" : "Pesan Palsu");
    return 0;
}