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
    int t,cnt=0,cnt1=0,f=0;
    int ar[11];
    cin>>t;
    while(t--)
    {
        for(int i=0; i<10; i++)
            cin>>ar[i];
        for(int i=1; i<10; i++)
        {
            if(ar[i-1]<ar[i])
            {
                cnt++;
            }
        }
        for(int i=1; i<10; i++)
        {
            if(ar[i-1]>ar[i])
            {
                cnt1++;
            }
        }
        if(f==0)
        {
            f=1;
            cout<<"Lumberjacks:"<<nn;

        }
        if(cnt==9 || cnt1==9)
        {
            cout<<"Ordered"<<nn;
        }
        else
            cout<<"Unordered"<<nn;
        cnt=cnt1=0;
        ar[10]= {};
    }


    return 0;
}
