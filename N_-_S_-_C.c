#include<stdio.h>
int main()
{
    int a,b,i,cube,square;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        square=i*i;
        cube=i*i*i;
    printf("%d %d %d
",i,square,cube);
    }
}