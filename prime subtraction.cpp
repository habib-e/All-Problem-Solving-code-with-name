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


using namespace std;
int main()
{
    ll x,y,i;
    bool isprime = true;
    int t;
    cin>>t;
    while(t!=0)
    {
        cin>>x>>y;
        ll s=x-y;
        if(s==1)
        {
            cout<<"NO"<<nn;
        }
        else
            cout<<"YES"<<nn;
        t--;
    }

    return 0;
}
