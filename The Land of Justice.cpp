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
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==-1 || n<0)
            break;
        if(n==1){
            cout<<"0%"<<endl;
            continue;
        }
        cout<<n*25<<"%"<<endl;
    }

    return 0;
}
