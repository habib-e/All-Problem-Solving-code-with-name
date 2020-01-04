#include<bits/stdc++.h>
using namespace std;
long long p;
int main()
{
    int n,r,s=0;
    vector<int>v;
    cin>>n>>r;
    s=r;
    for(int i=1; i<=n; i++)
    {
        cin>>p;
        v.push_back(p);
    }
    for(int i=r;i<=n;i++)
    {
        if(v[i]==r)
        {
            continue;
        }
        else if(v[i]==r+1)
        {
            continue;
        }
        else
        {
            v.pop_back();
        }
        r=r+s;
    }

    return 0;
}
