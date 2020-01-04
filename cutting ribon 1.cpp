#include<bits/stdc++.h>
using namespace std;
int K(int n)
{
    int a,b,c,k;
    int dp[4010];
    memset(dp,-1,sizeof(dp));

    if(n==0) return 0;
    else if(n<0) return -INFINITY;
    else if(dp[n]!=-1) return dp[n];
    else
    {
        int d=1+K(n-a);
        int e=1+K(n-b);
        int f=1+K(n-c);

        dp[n]=max(d,max(e,f));
        return dp[n];
    }
}

int main()
{
    int n,a,b,c,k;
    cin>>n>>a>>b>>c;
    cout<<K(int n);

    return 0;
}
