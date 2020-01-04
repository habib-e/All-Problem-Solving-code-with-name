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
    int n,m,i,j,flag=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                if(flag==0 && j==m-1)
                {
                    cout<<"#";
                }
                else if(flag==1&&j==0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }

        }
        if(i%2!=0)
        {
            if(flag==0)
                flag=1;
            else
                flag=0;
        }
        cout<<nn;
    }
    return 0;
}
