#include<stdio.h>
#include<string.h>
void main()
{
    char a[1000];
    int i,j,c=0;
    scanf("%s",a);
    j=strlen(a);
    for(i=0;i<j;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        {
            c++;
        }
    }
    if((c==j)||(c==j-1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
