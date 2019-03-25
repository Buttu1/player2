#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j,l,n,f,c=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
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
            c++;
        }
    }
    if(c>=k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
© 2019 GitHub, Inc.
