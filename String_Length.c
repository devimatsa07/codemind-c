#include<stdio.h>
int main()
{
    char s[20];
    int i,len=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        len=len+1;
    }
    printf("%d",len);
}