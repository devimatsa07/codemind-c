#include<stdio.h>
int main()
{
    int p,c,b,m,x;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&x);
    float total=(p+c+b+m+x);
    float per=(total/500)*100;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}