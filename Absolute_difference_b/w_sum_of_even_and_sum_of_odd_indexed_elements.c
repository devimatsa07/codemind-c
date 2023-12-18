#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,esum=0,osum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0) esum=esum+a[i];
        else osum=osum+a[i];
    }
    int diff=abs(esum-osum);
    printf("%d",diff);
}