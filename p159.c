#include <stdio.h>
int main()
{
    int n,m,bin=0,rem,count=0,rem2,power=1,mul,a[1000],i=0,j,b[100],k,c=0;
    scanf("%d %d",&n,&m);
    mul=n*m;
    while(mul>0)
    {
        rem=mul%2;
        bin=bin+rem*power;
        mul=mul/2;
        power=power*10;
    }
    while(bin>0)
    {
        rem2=bin%10;
        a[i]=rem2;
        bin=bin/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(a[j]==1)
        {
            c++;
        }
    }
    printf("%d",c);
    
    
}
