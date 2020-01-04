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
    int ar[100][100];
    int i,o=0,p=0,n,m,j,flag=0;
    cin>>n>>m;
    for(i=1; i<=4; i++)
    {
        if(i%2!=0)
            cout<<"#";
        cout<<nn;
        if(i%2==0)
        {
            cout<<".";
            if(i=m)
                cout<<"#";
        }
        cout<<nn;
        if((i+1)%2!=0)
            cout<<"#";
        cout<<nn;
        if((i+1)%==0)
        {
            cout<<".";
            if(i==1)
                cout<<"#"
        }
        cout<<nn;



    }
