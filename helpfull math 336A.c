#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],temp='u',str[100];
    int i=0,j=0;
    scanf("%s",s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]!='+')
        {
            for(j=0; s[j]!='\0'; j++)
            {
                if((s[j]>s[i]) && str[j] !='+')
                {
                    temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                }
            }
        }


    }
    printf("%s",s);
    return 0;
}
