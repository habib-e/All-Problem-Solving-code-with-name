#include<stdio.h>
int main()
{
    int i=1,n,flag=0;
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            if(flag==1)
                printf("that I hate ");
            else
                printf("I hate ");

        }
        else
        {
            printf("that I love ")
            flag=1;
        }
        if(i==n);
            printf("it");
        i++;
    }

    return 0;
}
