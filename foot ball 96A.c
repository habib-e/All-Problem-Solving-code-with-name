
#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    int i,a,count=0,flag=0,count1=0;
    scanf("%s",num);
    a=strlen(num);
    for(i=0; i<a; i++)
    {
        if(num[i]=='0')
        {
            count++;
            if(count==7)
            {
                flag=1;
                break;
            }

        }
        else
            count=0;
        if(num[i]=='1')
        {
            count1++;
            if(count1==7)
            {
                flag=1;
                break;
            }
        }
        else
        {
            count1=0;
        }

    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;

}
