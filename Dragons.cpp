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
    ll s,n,i,j;
    ll sum=0;
    int flag=0;
    int x[10001],y[10001];
    int cnt=0;
    cin>>s>>n;
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0; i<1; i++)
    {
        if(i==0)
        {
            if(x[0]<s)
            {
                sum+=(y[0]+s);
                cnt++;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    for(i=1; i<n; i++)
    {
        if(x[i]<sum)
        {
            sum+=(y[i]+s);
            cnt++;
        }
        else
        {
            cout<<"NO";
            return 0;

        }
    }
    if(cnt==n)
        cout<<"YES";
    return 0;
}
