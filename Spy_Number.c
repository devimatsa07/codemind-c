#include<stdio.h>
int main()
{
    int a,n,sum=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        p=p*a;
        n=n/10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}