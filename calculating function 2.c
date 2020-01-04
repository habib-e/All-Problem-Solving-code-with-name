#include<stdio.h>
int main()
{
    unsigned long long int n,x=0;
    scanf("%I64d",&n);
    if(n%2==0)
    {
        n=n/2;
        printf("%I64d\n",n);
    }
    else
    {
        x=(n+1)/2;
        printf("-%I64d\n",x);
    }
    return 0;
}
