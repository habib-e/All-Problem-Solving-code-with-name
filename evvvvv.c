#include<stdio.h>
int main()
{
    long long int n,k;
    long long int odd,even,res;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
    {
        even=n/2;
    }
    else
    {
        even=(n/2)+1;
    }
    if(k<=even)
    {
        res=(2*k)-1;
    }
    else
    {
        res=(k-even)*2;
    }
    printf("%lld",res);
    return 0;
}
