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
    int i,id,maximum_score=0,a[101];
    for(i=0;i<10;i++) a[i]=0;
    for(i=0;i<100;i++)
    {
        cin>>id;
        a[id-1]++;
    }
    maximum_score=0;
    for(i=0;i<10;i++)
    {
        if(maximum_score<a[i]) maximum_score=a[i];
    }
    cout<<
    return 0;
}
