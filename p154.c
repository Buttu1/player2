#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000];
    int i,k,j;
    scanf("%s",a);
    scanf("%d",&k);
    j=strlen(a);
    i=k-1;
    while(i<j)
    {
        a[i]=a[i]-32;
        i=i+k;
    }
    printf("%s",a);
    
}
