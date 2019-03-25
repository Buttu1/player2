#include<stdio.h>
    int main()
    {
        int a[100],i,j,k,n,t,t1,b[100],x;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
  
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        j=0;
        for(i=0;i<k;i++)
        {
            b[j]=a[i];
            j++;
        }
        x=j;
        for(i=k;i<n;i++)
        {
            for(j=k;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    t1=a[i];
                    a[i]=a[j];
                    a[j]=t1; 
                }
            }
        }
        for(i=n-1;i>=k;i--)
        {
            b[x]=a[i];
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        
    }
