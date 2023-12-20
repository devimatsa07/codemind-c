#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && c>b)
    {
        printf("%d",a+c);
    }
    else if(b>c && a>c)
    {
      printf("%d",b+a);
    }
    else if(c>a && b>a)
    {
        printf("%d",b+c);
    }
}