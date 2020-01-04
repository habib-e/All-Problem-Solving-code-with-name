#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],str1[101];
    int n;
    scanf("%s",str);
    scanf("%s",str1);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i] >= 'A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        else
            str[i] = str[i];
        i++;
    }
    str[i] = '\0';
    i=0;
    while(str1[i] != '\0')
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i] = str1[i] + 32;
        else
            str1[i]=str1[i];
        i++;
    }
    str1[i] = '\0';
    n=strcmp(str,str1);
    printf("%d\n",n);
    return 0;
}

