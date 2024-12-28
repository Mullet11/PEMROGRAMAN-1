#include<stdio.h>
int main(){
    int a,b,res=0,all=0;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int n=0; n<a; n++){res=0;
    for(int p=n; p>=0; p--){printf("(%d * %d)",p+1, b); if(p>0){printf(" + "); }
    res+=(p+1)*b; }
    printf(" = %d\n", res); all+=res;
    }
printf("%d\n", all);
return 0;
}