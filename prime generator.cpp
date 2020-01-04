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
    int t,isprime=0;
    ll m,n;
    cin>>t;
    while(t!=0)
    {
        cin>>m>>n;
        if(m==1)
            m=2;
        for(int i=m; i<=n; i++)
        {
            isprime=0;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isprime=1;
                    break;
                }
            }
            if(isprime==0)
                cout<<i<<endl;
        }
        cout<<nn;
        t--;
    }
    return 0;
}
