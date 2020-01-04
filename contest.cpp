#include<bits/stdc++.h>
#include<math.h>
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
    ll n,a,b,i,j,s,y=0,x=0,res=0,t,f=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        for(i=a; i>=0; i--)
        {
            for(j=b; j>=0; j--)
            {
                res=(i*n)+j;
                if(abs(res)==s)
                {
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }

                res=0;
            }
            if(f==1)
                break;
            res=0;
        }
        if(f==0)
            cout<<"NO"<<endl;
        f=0;
        res=0;


    }


    return 0;
}
