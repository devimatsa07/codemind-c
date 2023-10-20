#include<stdio.h>
int main()
{
    int x,y,res;
    scanf("%d%d",&x,&y);
    res=30*y;
    if(x>=res)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}