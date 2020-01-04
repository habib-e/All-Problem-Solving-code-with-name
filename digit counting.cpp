#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


int main()
{
    ll t,n,k,d,a[100010];
    cin>>t;
    while(t--)
    {
        ll a[11]={0};
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            k=i;
            while(k)
            {
                a[k%10]++;
                k/=10;
            }
        }
        for(int i=0;i<=9;i++)
        {
           if(i==9) cout<<a[i]<<nn;
           else cout<<a[i]<<ss;
        }
        //cout<<nn;


    }


    return 0;
}
