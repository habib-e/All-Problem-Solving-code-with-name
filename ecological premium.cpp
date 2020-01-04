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
    int t,f;
    int ar[1000];
    int i,sum=0,sum1=0,n;
    cin>>n;
    while(n--)
    {
        cin>>f;
        while(f--)
        {
            for(i=0; i<3; i++)
            {
                cin>>ar[i];

            }
            sum+=(ar[0]*ar[2]);
            sum1+=sum;
            sum=0;
        }
        cout<<sum1<<endl;
        sum1=0;

    }


    return 0;
}
