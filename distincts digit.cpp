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
    int l,n,r,i=0,cnt=0,j=0,flag=0;
    int ar[10];
    cin>>l>>r;
    while(l<=r)
    {
        cnt=0;
        flag=0;
        n=l;
        i=0;
        while(n!=0)
        {
            cnt++;
            ar[i]=n%10;
            i++;
            n=n/10;

        }
        for(i=0;i<cnt;i++)
        {
            for(j=i+1;j<cnt;j++)
            {
                if(ar[i]==ar[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
        {
            break;
        }
        l++;
    }
    if(flag==0)
    {
        for(i=cnt-1;i>=0;i--)
        {
            cout<<ar[i];
        }
    }
    else
        cout<<"-1";
    return 0;
}
