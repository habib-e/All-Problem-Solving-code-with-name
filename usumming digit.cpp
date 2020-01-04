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

int sum(ll n);
int sum(ll n)
{
    ll digit=0;
    ll res=0;

    while(n!=0)
    {
        digit = n % 10;
        res = res +digit;
        n = n / 10;

        return res;
    }
}


int main()
{
    ll digit,res=0;
    ll n,a,b,c;
    cin>>n;
    a=sum(res);
    b=sum(a);
    c=sum(b);
    cout<<c<<nn;
}
