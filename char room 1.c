
#include<stdio.h>
#include<string.h>
int main()
{
    char str[102];
    int i=0,j=0,k=0,l=0,m=0,flag=0;
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='h')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[j]=='e')
            {
                flag=2;
                break;
            }
        }
    }

    if(flag==2)
    {
        for(k=j+1; str[k]!='\0'; k++)
        {
            if(str[k]=='l')
            {
                flag=3;
                break;
            }
        }
    }

    if(flag==3)
    {
        for(l=k+1; str[l]!='\0'; l++)
        {
            if(str[l]=='l')
            {
                flag=4;
                break;
            }
        }
    }

    if(flag==4)
    {
        for(m=l+1; str[m]!='\0'; m++)
        {
            if(str[m]=='o')
            {
                flag=5;
                break;
            }
        }
    }
    if(flag==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;

}
