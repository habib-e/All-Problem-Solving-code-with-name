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
    int t,i,j=1,m=-9999;
    int a[100];
    char h[101];
    cin>>t;
    while(t--)
    {
        m=-99999;
        for(i=0;i<10;i++)
        {
            cin>>h[i]>>a[i];

        }
        for(i=1;i<10;i++){
            m=max(a[i-1],a[i]);
        }
        for(i=0;i<10;i++)
        {
            if(i==0)
                cout<<"Case #"<<j++<<":"<<nn;
            if(m==a[i])
            {
                cout<<h[i]<<nn;
            }
        }



    }
    return 0;
}
