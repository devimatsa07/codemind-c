#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int h=x/3600;
    int y=x%3600;
    int m=y/60;
    int z=y%60;
    int s=z;
    printf("H:M:S-%d:%d:%d",h,m,s);
}