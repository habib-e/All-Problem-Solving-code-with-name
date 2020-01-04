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
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else
            {
                if((i+j)%5==0)
                {
                    cout<<"#";
                }
                if((j==1 && (i+j)%5==0))
                {
                    cout<<"#";
                }
                else
                    cout<<".";
            }

        }
        cout<<nn;
    }
}
