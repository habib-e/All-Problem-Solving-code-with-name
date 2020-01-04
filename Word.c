#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,j=0,up=0,low=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            up++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            low++;
        }

    }
    if((low==up)||(low>up))
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }

        }
    }
    else
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]=s[i]-32;
            }

        }
    printf("%s",s);
    return 0;
}
