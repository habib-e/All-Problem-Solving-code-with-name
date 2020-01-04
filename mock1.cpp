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
    ll y,x,n,t;
    ll z,m,b,flag=0;
    int test;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>x;
        m=x;
        y=m^n;
        if(y>=x && y<=n)
        {
            while(m<=n)
            {
                b=m^x;
                if(b==n)
                {
                    cout<<m<<nn;
                    break;
                }
                b=0;
                m++;
            }
        }
        else
        {
            cout<<"-1";
        }
        t--;
    }
    return 0;
}
