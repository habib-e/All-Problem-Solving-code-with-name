#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        sum = sum + i;

    }
    if(sum%2==0)
    {
        printf("The sum num is even : %d\n",sum);


    }
    else if(sum%2==1)
    {
        printf("The sum num is odd : %d\n",sum);
    }
    return 0;










}
