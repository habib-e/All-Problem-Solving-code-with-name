#include<stdio.h>
#include<string.h>
int main()
{
    char color[51];
    int i=0,j=0,n;
    int count=0;
    scanf("%d",&n);
    scanf("%s",color);
    color[n] = '\0';
    for(i=1; color[i]!='\0'; i++)
    {
        if(color[i]!=color[i-1])
        {
            if(color[i]=='R')
                continue;
            else if(color[i]=='G')
                continue;
            else if(color[i]=='B')
                continue;
            else
            {
                count=0;
                break;
            }

        }
        else
        {
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}
