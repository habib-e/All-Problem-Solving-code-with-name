#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>ans;
ll coins(ll n)
{
    if(n==0)
        return 0;
    else if(!ans[n])
    {
        ans[n]=max(n,coins(n/2)+coins(n/3)+coins(n/4));
    }
    return ans[n];
}
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        cout<<coins(n)<<endl;
    }
    return 0;
}
