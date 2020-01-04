#include<stdio.h>
#include<string.h>
int main()
{
    char string[110];
    int i=0,j,flag=0;
    scanf("%s",string);
    j=strlen(string);
    for(i=0;i<j;i++)
    {
        if((string[i]=='H') || (string[i]=='Q') || (string[i]=='9'))
            {
                flag=1;
                break;
            }
            if(flag==1)
                break;
        else
            flag=0;
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO");
    return 0;
}
