#include<stdio.h>
int main()
{
    int n,res,a,sum=0;
    scanf("%d",&n);
    res=n*n;
    while(res!=0)
    {
        a=res%10;
        sum=sum+a;
        res=res/10;
    }
    if(sum==n)
    {
       printf("Neon Number"); 
    }
    else
    {
        printf("Not Neon Number");
    }
}