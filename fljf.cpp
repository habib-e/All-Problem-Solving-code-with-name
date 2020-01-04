#include<bits/stdc++.h>
#include<math.h>
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
    int t,f=0;
    int res=0;
    ll n,a,b,s,y=0,x=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        x=a;
        y=b;
        while(b>=0)
        {

            res=(a*n)+b;
            if(abs(res)==s)
            {
                cout<<"YES"<<endl;
                f=1;
                break;
            }
            b--;
            res=0;
        }
        b=y;
        a=x;
        res=0;
        if(f!=1)
        {

            while(a!=0)
            {

                res=(a*n)+b;
                if(abs(res)==s)
                {
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }
                a--;
                res=0;
            }

        }
//        if(f==0)
//        {
//            while(x>=0 || y>=0)
//            {
//
//                res=(x*n)+y;
//                if(abs(res)==s)
//                {
//                    cout<<"YES"<<endl;
//                    f=1;
//                    break;
//                }
//                x--;
//                y--;
//                res=0;
//
//            }
//        }


        if(f==0)
            cout<<"NO"<<endl;
        f=0;
        res=0;
        x=0;
        y=0;


    }


    return 0;
}
