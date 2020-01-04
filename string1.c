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
    int i,n,l;
    double res1,res2,maxx,d;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    res1=max(a[0]-0,l-a[n-1]);
    maxx=0;
    for(i=1;i<n;i++)
    {
        d=(a[i]-a[i-1])/2;
        if(d>maxx)
            maxx=d;
    }
    res2=max(res1,maxx);
    printf("%.10f\n",res2);
    return 0;
}
