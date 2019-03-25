#include<stdio.h>
void main()
{
    char a[1000];
    int i,n,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='1' && a[i]<='9')
        {
            n=a[i]-48;
            for(j=0;j<n;j++)
            {
                printf("%c",a[i-1]);
            }
        }
    }
    
}
