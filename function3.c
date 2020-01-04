#include<stdio.h>
#include<string.h>
int main()
{
    int b=0,c=0,j=0;
    char str1[100],a,d,e;
    int ts,t=0;
    scanf("%d",&ts);
    while(t<ts)
    {
        gets(str1);
        c=strlen(str1);
        if(c>10)
        {
            a=(str1[j]);
            b=(c-2);
            d=(str1[c-1]);
        }
        else
        {
            e=str1;
        }

        printf("%c%d%c",a,b,d);
        printf("%s",e):
            t++;
        }



        return 0;

    }
