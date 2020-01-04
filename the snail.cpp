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
    int h,d,f,i;
    int day;
    double dc=0,sum=0,u;
    while(scanf("%d %lf %d %d",&h,&u,&d,&f)!=EOF)
    {
        sum=0;
        day=1;
        if(h==0)
            break;
        dc=(u*f)/100;
        for(i=1; i<=100000; i++)
        {
            sum+=u;
            if(u>0)
                u-=dc;
            if(sum>h)
                break;
            sum-=d;
            if(sum<0)
                break;
            day++;


        }
        if(sum<0)
        {
            cout<<"failure on day "<<day<<nn;

        }
        else
        {
            cout<<"success on day "<<day<<nn;
        }
    }


    return 0;
}
