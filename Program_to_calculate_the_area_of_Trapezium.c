#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float res=0.5*h*(a+b);
    printf("%.4f",res);
}