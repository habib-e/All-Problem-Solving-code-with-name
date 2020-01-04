#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    int uh=0,res=0,up=0,ah=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        uh=(a+b)/3;
        cout<<"h"<<uh<<endl;
        up=c/uh;
        cout<<"h"<<up<<endl;
        ah=a-uh;
        cout<<"h"<<ah<<endl;
        res=(up*ah);
        cout<<res<<endl;
        uh=up=ah=res=0;
    }


    return 0;
}
