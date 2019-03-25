#include<stdio.h>
#include<string.h>
void amin()
{
    char a[1000],b[1000];
    int i,j,l,m,f,n=0;
    scanf("%s %s",a,b);
    l=strlen(a);
    m=strlen(b);
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                f=0;
                break;
            }
            else
            {
                f=1;
            }
        }
        if(f==1)
        {
            n++;
        }
    }
    if(n==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    }
