#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf=(bs*12)/100.0;
    float gs=bs+da+hra+pf;
    printf("%.2f
%.2f",pf,gs);
}