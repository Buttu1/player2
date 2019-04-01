#include <stdio.h>

int main()
{
    int n,a[20],i,j,max,b[20],p=1,sum=0,temp,n1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=n;
    while(n>0)
    {
        p=p*10;
        n--;
        
    }
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(i=n1;i>=0;i--)
    {
      sum=sum+(a[i]*p);
      p=p/10;
    }
    printf("%d",sum);
}
