#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long int a,long long int b,long long int m)
{
    if(b==0) return 1%m;
    long long int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}
int main()
{
    long long int b,p,M;
    while(cin>>b>>p>>M){
    cout<<bigmod(b,p,M)<<endl;
    }
    return 0;
}
