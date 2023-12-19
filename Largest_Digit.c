#include<stdio.h>
int main()
{
    int n,b=0,i;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        if(b<i)
        b=i;
        n=n/10;
    }
    printf("%d",b);
}