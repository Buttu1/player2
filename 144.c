#include<stdio.h>
void main()
{
    int n,a[10000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]%a[i]==0)
        {
            printf("%d ",a[i+1]);
        }
    }
   
}
