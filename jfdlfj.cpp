#include <bits/stdc++.h>
using namespace std;
long int power(long int x,unsigned long int y);
long int printDivisors(long int n,long int m)
{
    long int u=m,i;
    long int sum=0,r=0;
    for (i=1; i<=n; i++)
        if (n%i==0)
        {
            r=power(i,u);
            sum+=r;
        }

    return sum;
}
long int power(long int x,unsigned long int y)
{
    long int res=1;
    while(y>0)
    {
        if(y & 1)
        {
            res=res*x;
        }
        y=y>>1;
        x=x*x;
    }
    return res;
}
int main()
{
    int T,h=1;
    unsigned long long int l,n,k;
    scanf("%d",&T);
    while(T--)
    {
//        cin>>n>>k;
        scanf("%lld %lld",&n,&k);
        l=printDivisors(n,k);
        cout<<"Case "<<h++<<": "<<l%1000000007<<endl;
    }
    return 0;
}
