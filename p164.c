#include <stdio.h>

void main()
{
    int a[100],n,i,k,f=0,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]==k)
        {
           printf("%d",a[i]);
           f=1;
           break;
        }
        else
        {
            if(a[i]<k)
            {
                p=a[i];
                f=0;
            }
        }
    }
    if(f==0)
    {
        printf("%d",p);
    }
        
    
}
