#include <stdio.h>
int reverse(int balik){
    int i=0;
    while(balik !=0){
        i=i*10;
        i=i+balik%10;
        balik/=10;
    }
    return i;
}
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
int C=A+B;
printf("%d",reverse(C));
}