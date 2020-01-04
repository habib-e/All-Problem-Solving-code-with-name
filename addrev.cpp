#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
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

int rev(int x)
{
    int res=0;
    while(x>0)
    {
        res=res*10;
        res=res+(x%10);
        x=x/10;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<rev(rev(a)+rev(b))<<nn;
    }

    return 0;
}
