#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a != b) {
        printf("Jumlah tidak sama");
        return 1;
    }
    int arr1[a], arr2[b];
    for (int i = 0; i < a; ++i) scanf("%d", &arr1[i]);
    for (int i = 0; i < b; ++i) scanf("%d", &arr2[i]);
    for (int i = 0; i < a; ++i) printf("%d ", arr1[i] * arr2[i]);
    return 0;
}