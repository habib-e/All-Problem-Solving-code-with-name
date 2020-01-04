#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0,flag=0,count1=0,l=0;
    char str[110];
    scanf("%s",str);
    l=strlen(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            count1++;
        }
    }
    i=1;
    if((str[0]>='a'&&str[0]<='z'&&count1<2)||count1==0)
    {
        flag=1;
        if(count1==0)
        {
            for(i=0; str[i]!='\0'; i++)
                str[i]=str[i]+32;
            str[i]='\0';

        }
        else
        {
            i=1;
            str[0]=str[0]-32;
            while(str[i]!='\0')
            {
                if(str[i]>='A'&&str[i]<='Z')
                {
                    str[i]=str[i]+32;
                }
                else
                    str[i]=str[i];
                i++;
            }
        }
        printf("%s",str);
    }
    if(flag==0||count>=2)
        printf("%s",str);
    return 0;
}
