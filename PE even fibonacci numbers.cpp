
#include<bits/stdc++.h>
using namespace std;
int sum;
int fib(int n)
{
    int f[n+2];
    int i,m=0;
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
        if(f[i]%2==0)
            sum+=f[i];
    }
    m=sum;
    return f[n];
    return m;
}
int main()
{
    int n;
    int sum=m;
    cin>>n;
    printf("%d",fib(n));
    printf("%d",sum);
    getchar();


    return 0;
}
