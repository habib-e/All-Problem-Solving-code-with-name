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
    ll t,i,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=(sqrt(1+4*2*n)-1)/2;
        cout<<s<<endl;
    }

    return 0;
}
