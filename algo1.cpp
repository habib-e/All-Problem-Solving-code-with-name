/*  Hello.....
    Can you hear me?
    This is Habib.

*/
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
    ll sum=0,cnt=0,n,m;
    int ar[100002],i=0,j=0,flag=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>ar[i];
        if(flag==0)
            cnt=ar[i]-1;
        else if(ar[i-1]<ar[i])
            cnt=ar[i]-ar[i-1];
        else if(ar[i-1]>ar[i])
            cnt=(n-ar[i-1])+ar[i];
        else
            cnt=ar[i]-ar[i-1];
        flag=1;
        sum+=cnt;
    }
    cout<<sum;
    return 0;




}
















