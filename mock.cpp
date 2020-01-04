
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
    int e,d,a,t,k;
    cin>>t;
    int i=1;
    while(t--)
    {
        cin>>e>>d>>k;
        if(d<=e)
            cout<<"Case "<<i<<": Foot"<<nn;
        else if(d<k*e)
            cout<<"Case "<<i<<": Rickshaw"<<nn;
        else
            cout<<"Case "<<i<<": Crying"<<nn;
        i++;
    }
    return 0;
}
