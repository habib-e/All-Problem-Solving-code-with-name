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
    int n,t,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1){
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==0)
        cout<<"EASY";
    else
        cout<<"HARD";
    return 0;
}
