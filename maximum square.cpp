#include<bits/stdc++.h>
//typedef int mone_boro_kosto;
//typedef v(1010) logic;
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        //vector<mone_boro_kosto>logic;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        v.pb(-1);
        n++;
        for(int i=0;i<n;i++)
        {
            if(v[i]<i+1)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }


return 0;
}
