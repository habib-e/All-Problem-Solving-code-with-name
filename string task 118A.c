#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],temp;
    int i,len=0;
    scanf("%s",string[i]);
    len = strlen(string);
    for(i=0;i<len;i=i+2)
    {
        string[i] = '.';
        temp = string[i];
    }
    printf("%c\n",temp);
}
