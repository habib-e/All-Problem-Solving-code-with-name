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
    int q,n,a,sum=0;
    cin>>q;
    while(q!=0)
    {
        cin>>n;
        int r=n;
        while(n!=0)
        {
            cin>>a;
            sum+=a;
            n--;
        }
        int avg;
        avg=sum/r;
        if((avg*r)>=sum)
            cout<<avg<<nn;
        else
            cout<<avg+1<<nn;
        sum=0;
        avg=0;
        r=0;
        q--;
    }

    return 0;
}

