#include<stdio.h>
#include<string.h>
int main()
{
    char str[1002],str1[1001];
    int i,j=0,k=0,l=0,m=0,n=0;
    int cnt=1;
    gets(str);
    for(i=0,j=i+2;str[i]!='\0',str[j]!='\0';i++,j=j+2)
    {
        if((str[i]>='a' && str[i]<='z') && (str[j]>='a' && str[j]<='z'))
        {
            for(i=0;str[i]!='\0';i++)
            {
                for(j=i+1;str[i]!='\0';j++)
                {
                    if(str[i]!=str[j])
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
