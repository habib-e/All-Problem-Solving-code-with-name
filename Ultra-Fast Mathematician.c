#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char habib[105],nobel[105];
    scanf("%s",habib);
    scanf("%s",nobel);
    for(i=0; i<strlen(habib); i++)
    {
        if(habib[i]=='0'&&nobel[i]=='0')
        {
            habib[i]='0';
        }
        else if(habib[i]=='0'&&nobel[i]=='1')
        {
            habib[i]='1';
        }
        else if(habib[i]=='1'&&nobel[i]=='0')
        {
            habib[i]='1';
        }
        else if(habib[i]=='1'&&nobel[i]=='1')
        {
            habib[i]='0';
        }
    }
    printf("%s\n",habib);
    return 0;
}
