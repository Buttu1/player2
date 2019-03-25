#include <stdio.h>

void main()
{
    char s1[10000],s2[10000],s3[1000];
    scanf("%s %s",s1,s2);
    int l,i,j,l1,l2,c,k=0,flag;
    l1=strlen(s1);
    l2=strlen(s2);
    l=l1+l2;
    
        for(i=0;s1[i]!=NULL;i++)
    {
    s3[k]=s1[i];
    k++;
    }
    for(i=0;s2[i]!=NULL;i++)
    {
        s3[k]=s2[i];
    k++;
    }
    if(l==26)
    {
    
    for(int i=0;i<l;i++)
			{
				if(s3[i]>='A' && s3[i]<='Z')
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag!=1)
			{
				printf("not complementary");
			}
			else
			{
			printf("complementary");
			}
		}
		else
		{
			printf("not complementary");
		}
    
    
  
}
