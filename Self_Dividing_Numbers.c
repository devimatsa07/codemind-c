//seif dividing numbers  btw two numbers using functions
#include<stdio.h>
int main()
{
	int f=1,r,a,b,t,i,n;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	f=0;
	t=i;
	while(t!=0)
	{
		r=t%10;
		if(r==0 || i%r!=0 )
		{
			f=1;
		}
		t=t/10;
	}
	if(f==0)
	{
		printf("%d ",i);
	}
}
}
