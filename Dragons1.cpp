#include<bits/stdc++.h>
using namespace std;
#define  pb              push_back
#define  PB              pop_back
#define  nn              "\n"
#define  all(p)          p.begin(),p.end()
#define  ss              " "
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  pi              acos(-1.0)
typedef  long long       ll;
typedef  vector<ll>      vll;
int main()
{
    ll s,n,i,j,x,y;
    int flag=0;
    int a[1001],b[1001];
    int cnt=0;
    cin>>s>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        a[i]=x;
        b[i]=y;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(s>a[i])
        {
            cnt++;
        }
        s+=b[i];
    }
    if(cnt==n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
