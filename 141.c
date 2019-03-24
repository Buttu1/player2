#include <stdio.h>

void main()
{
    char a[1000];
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("yes");
            break;
        }
                   
    }
    if(c==0)
    {
        printf("no");
    }

    
}
