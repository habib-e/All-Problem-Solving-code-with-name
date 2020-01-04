#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<iterator>
#include<map>
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
    int T=1;
    int N;
    int i;
    while(cin>>N)
    {
        map<string,int>balance;
        vector<string>names;
        for(i=0;i<N;i++)
        {
            string name;
            cin>>name;
            balance[name]=0;
            names.push_back(name);
        }
        for(i=0;i<N;i++)
        {
            string name;
            cin>>name;
            int spentm,npeople;
            cin>>spentm>>npeople;
            if(npeople==0)
                continue;
            int gift = spentm/npeople;
            balance[name]-=gift*npeople;
            for(int j=0;j<npeople;j++)
            {
                cin>>name;
                balance[name]+=gift;
            }
        }
        if(T++>1)
            cout<<nn;
        for(i=0;i<N;i++)
        {
            cout<<names[i]<<" "<<balance[names[i]]<<nn;
        }
    }

    return 0;
}
