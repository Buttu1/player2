#include<stdio.h>
#include<string.h>
void main()
{
    char a1[1000];
    int i,n,j,l,c=1;;
    scanf("%s",a1);
    l=strlen(a1);
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(a1[i]==a1[j])
            {
                c++;
                a1[j]='\0';
            }
        }
        if(a1[i]!='\0')
        {
        printf("%c%d",a1[i],c);
        }
    }
    
}
