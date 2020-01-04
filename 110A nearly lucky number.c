#include<stdio.h>
#include<string.h>
int main()
{
    char string[110];
    int i,count=0,len;
    scanf("%s",string);
    len=strlen(string);
    for(i=0;i<len;i++)
    {
        if(string[i]=='4' || string[i]=='7')
        {
            count++;
        }
    }
    if(count==7 || count==4)
    {
        printf("YES\n");
    }
    else
        printf("NO");
    return 0;
}
