#include<stdio.h>
    int main()
    {
        char a[100];
        int i,k,l=0,x;
        scanf("%s",&a);
        scanf("%d",&k);
        l=strlen(a);
        
        for(i=k-1;i<l;i=i+k)
        {
            printf("%c",a[i]);
           
        }
    }
