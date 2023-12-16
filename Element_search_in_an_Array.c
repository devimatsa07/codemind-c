#include<stdio.h>
int main()
{
	int i,n,se,flag=0;
	scanf("%d",&n);
    int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(se==a[i])
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	printf("True");
	else printf("False");
}