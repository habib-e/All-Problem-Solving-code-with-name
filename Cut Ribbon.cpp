#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              " "
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(a+c==n || b+c==n) cout<<"2";
    else if(a!=b && b!=c && a+b+c<n) cout<<n;
    else cout<<"1";
    return 0;
}
