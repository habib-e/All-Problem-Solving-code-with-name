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
    long n,b,h,w,p,res=0,m=15000000;
    int a[100005];
    while(scanf("%ld %ld %ld %ld",&n,&b,&h,&w)!=EOF)
    {
        while(h--)
        {
            scanf("%ld",&p);
            for(int i=0; i<w; i++)
            {
                scanf("%d",&a[i]);

            }
            for(int i=0;i<w;i++)
            {
                if(a[i]>=n)
                {
                    res=p*n;
                    if(m>res)
                        m=res;
                }
            }
        }

        if(m<b)
        {
            cout<<m<<nn;
        }
        else
            cout<<"stay home"<<nn;
        m=15000000;
    }

    return 0;
}
