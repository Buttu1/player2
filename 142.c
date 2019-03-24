#include<stdio.h>
#include<string.h>
void main()
{
    char a[100][100];
    int i,j,l,m,k,n,c=0,h,s=1,f=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        l=strlen(a[i]);
        for(j=i+1;j<n;j++)
        {
        m=strlen(a[j]);
        if(l==m)
        {
            for(k=0;k<m;k++)
            {
                if(a[i][k]==a[j][k])
                {
                    c++;
                }
            }
            if(c==m)
            {
                s++;
            }
        }
           
        }
    if(s==h)
    {
        f=1;
        break;
    }
    else
    {
        f=0;
    }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    
}
