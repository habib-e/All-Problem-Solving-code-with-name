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
    int t,T,i=0,j=0,m=0,flag=0;
    int ar[510],q=0,k=0;
    char s[510];
    cin>>T;
    while(T--)
    {
        //cin>>t;
        gets(s);
        while(s[j]!='\0')
        {
            m=s[j];
            for(i=m; i<m+20; i++)
            {
                for(k=2; k<m/2; k++)
                {
                    if(i%k==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    ar[q]=i;
                    q++;
                }
            }
            m=0;
            i=0;
            k=0;
            j++;

        }

    }
    int y=0;
    for(y=0; y<q+1; y++)
        printf("%s",ar[y]);

    return 0;
}
