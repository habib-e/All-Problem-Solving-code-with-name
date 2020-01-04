#include<stdio.h>
int main()
{
    int n,i,fact=1,sum=0,j;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            fact = fact * i;
        }

        sum=sum+fact;
    }
    printf("%d",sum);
    return 0;
}
