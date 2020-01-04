#include<stdio.h>
int main()
{
    int num,i,flag=0;
    scanf("%d",&num);
    if(num==1)
        flag=1;
    else
    {
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        printf("Not prime\n");
    else
        printf("Prime\n");
    return 0;
}
