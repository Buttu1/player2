#include<stdio.h>

void main()
{
    int Num,ar[100],i,j,ka=0,te;
    scanf("%d",&Num);
    while(Num>0)
    {
        ar[ka]=Num%10;
        Num=Num/10;
        ka++;
    }
    for(i=0;i<ka;i++)
    {
        for(j=i+1;j<ka;j++)
        {
            if(ar[i]<ar[j])
            {
                te=ar[i];
                ar[i]=ar[j];
                ar[j]=te;
            }
        }
        printf("%d",ar[i]);
    }    
    }
