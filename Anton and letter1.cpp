#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010],ch='1';
    int i=0,j=0,k=0,count=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            ch=str[i];
            count++;
            for(j=i+1;str[j]!='\0';j++)
            {
                if(ch==str[j])
                {
                    for(k=j;str[k]!='\0';k++)
                    {
                        str[k]=str[k+1];
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
