#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    float a=r/100.0;
    float ci=p*pow((1+a),t)-p;
    printf("%.2f",ci);
}