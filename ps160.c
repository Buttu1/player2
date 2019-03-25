#include <stdio.h>

void main() 
{
	int n,m,i,rem,bit,a[20],c=0,count1=0;
	scanf("%d %d",&n,&m);
	bit=n|m;
	while(bit!=0)
	{
		rem=bit%2;
		a[i]=rem;
		i++;
		c=c+1;
		bit=bit/2;
	}
	for(i=0;i<c;i++)
	{
		if(a[i]==1)
		{
			count1=count1+1;
		}
	}
	printf("%d",count1);
	
	
	}
