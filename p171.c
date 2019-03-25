#include<stdio.h>
#include<string.h>
void main()
{
    char ar[1000],br[100][100],te[100];
    int i,j=0,ka=0,len,flg,po;
    gets(ar);
    len=strlen(ar);
    for(i=0;i<len;i++)
    {
        if(ar[i]!=' ')
        {
            br[j][ka]=ar[i];
            ka++;
        }
        if(ar[i]==' ')
        {
            j++;
            ka=0;
        }
    }
    for(i=0;i<j+1;i++)
    {
        len=strlen(br[i]);
        if(len==3)
        {
            if(br[i][0]=='a' && br[i][1]=='n' && br[i][2]=='d')
            {
                po=i;
                flg=1;
            }
            else
            {
                flg=0;
            }
        }
        if(flg==1)
        {
            te=br[po+1];
            br[po+1]=br[po-1];
            br[po-1]=te;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%s",br[i]);
    }
    
}
