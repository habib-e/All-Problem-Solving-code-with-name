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
    int t,z=1;
    ll N,cnt=0,i;
    cin>>t;
    while(t!=0)
    {
        cin>>N;
        for (int i = 1; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                // If divisors are equal,
                // count only one
                if (N / i == i)
                    cnt++;

                else // Otherwise count both
                    cnt = cnt + 2;
            }
        }
        cout<<"Case "<<z<<": "<<cnt<<nn;
        cnt=0;
        z++;
        t--;
    }
    return 0;
}
