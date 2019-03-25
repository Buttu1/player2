#include <stdio.h>
void main()
{
    char a[100][100],b[100];
    int n,i,j,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        strcpy(b,a[i]);
        {
            for(j=0;b[j]!='\0';j++)
            {
                if((b[j]=='a' ||b[j]=='e' ||b[j]=='i' ||b[j]=='o' ||b[j]=='u')||(b[j]=='A' ||b[j]=='E' ||b[j]=='I' ||b[j]=='O' ||b[j]=='U'))
                {
                    c++;
                }
            }
        
        if(c>=1)
        {
                s++;
        }
        }
        
    }
    if(s==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
   
}
