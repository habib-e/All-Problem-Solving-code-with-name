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
    int n,m,x;
    int t;
    cin>>t;

    while(t!=0)
    {
        x=0;
        cin>>n>>m;
        while(n!=0 && m!=0)
        {
            n--;
            m--;
            if(x==0)
                x=1;
            else
                x=0;

        }
        if(x==0)
            cout<<"Sudipto"<<nn;
        else
            cout<<"Saddam"<<nn;
        t--;
    }
    return 0;
}
