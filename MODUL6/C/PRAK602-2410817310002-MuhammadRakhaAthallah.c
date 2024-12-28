#include <stdio.h>

int main() {
    int zetsu;
    scanf("%d", &zetsu);
    for (int i = 0, j; i < zetsu; ++i) {
        scanf("%d", &j);
        printf("%d ", j * (i + 1));
    }
    return 0;
}