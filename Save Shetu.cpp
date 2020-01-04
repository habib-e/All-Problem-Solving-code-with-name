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
    string h;
    ll t,m,sum=0,f=0,n=0;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>h;
        if(h=="report"){
            cout<<sum<<nn;
            f=1;
        }
        if(f!=1){
            scanf("%lld",&m);
            sum+=m;
        }


        f=0;

    }

    return 0;
}

