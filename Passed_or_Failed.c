#include<stdio.h>
int main()
{
    int e,m,p,c,x;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&x);
    if(e>=34 && m>=34 && p>=34 && c>=34 && x>=34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}