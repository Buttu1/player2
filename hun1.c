#include <stdio.h>

int main()
{
  int i,n,a[20],b[20],j,k=0,c=0,temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j]&&a[i]!='*')
           {
               a[j]='*';
               b[k]=a[i];
               k++;
           }
       }
  }
  for(i=0;i<k;i++)
  {
      for(j=i+1;j<k;j++)
      {
          if(b[i]==b[j])
          {
              b[j]='*';
          }
      }
  }
  for(i=0;i<k;i++)
  {
      
      for(j=i+1;j<k;j++)
    
      {
          if(b[i]>b[j]&&b[i]!='*')
          {
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
          }
        
      }
      
  }
  
  for(i=0;i<k;i++)
  {
      if(b[i]!='*')
      {
      printf("%d\t",b[i]);
      }
  }
}
