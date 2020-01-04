
#include<bits/stdc++.h>
using namespace std;
#define  pb              push_back
#define  PB              pop_back
#define  nn              "\n"
#define  all(p)          p.begin(),p.end()
#define  ss              " "
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  pi              acos(-1.0)
typedef  long long       ll;
typedef  vector<ll>      vll;

int main()
{
    int n;
    cin>>n;
    int x,cnt=0;
    int i=0,y=4,flag=1,j=0;
    if(n%4==0)
    {
        x=n/2;
        y=x;
    }
    else
    {
        for(x=n-1; x>3; x--)
        {
            flag=1;
            y=4;
            if(x%2!=0)
            {
                if(x%3!=0)
                {
                    if(x%5!=0||x==5)
                    {
                        flag=0;
                        continue;
                    }
                    else
                        flag=1;
                }
                else
                    flag=1;
            }
            else
                flag=1;
            if(flag==1)
            {
                for(; y<n; y++)
                {
                    if(y%2!=0)
                    {
                        if(y%3!=0)
                        {
                            if(y%5!=0|| y==5)
                            {
                                flag=0;
                                continue;
                            }
                            else
                                flag=1;
                        }
                        else
                            flag=1;
                    }
                    else
                        flag=1;
                    if(x+y==n && flag!=0)
                    {
                        cnt=1;
                        break;
                    }
                }

            }
            if(cnt==1)
                break;
        }


    }
    cout<<x<<" "<<y;

    return 0;
}
