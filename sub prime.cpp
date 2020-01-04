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
    int B[33];
    int b,n,d,c,v;
    while(cin>>b>>n)
    {
        if(b==0 && n==0)
            break;
        for(int i=1;i<=b;i++)
            cin>>B[i];
        for(int i=1;i<=n;i++)
        {
            cin>>d>>c>>v;
            B[d]-=v;
            B[c]+=v;
        }
        bool f=true;
        for(int i=1;i<=b;i++)
            if(B[i]<0) f=false;
        if(f) cout<<"S"<<nn;
        else cout<<"N"<<nn;
    }

    return 0;
}
