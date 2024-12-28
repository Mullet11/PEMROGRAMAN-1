#include <stdio.h>
int Maximus (int r, int y, int a, int n) {
    int max=r;
    if(y>max)max=y;
    if(a>max)max=a;
    if(n>max)max=n;
    return max;
}
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int hasil=Maximus(a, b, c, d);
    printf("%d", hasil);
    return 0;
}