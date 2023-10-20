#include<stdio.h>
int main()
{
    int x,a,b,res;
    scanf("%d%d%d",&x,&a,&b);
    res=(a+(2*b));
    if(x<=res)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}