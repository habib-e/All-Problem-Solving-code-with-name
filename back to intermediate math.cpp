#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,j=1;
    double d,u,v,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>d>>v>>u;
        s1=d/u;
        s2=d/sqrt(u*u-v*v);
        if(v>=u||u==0||v==0)
            cout<<"Case "<<j++<<": "<<"can't determine"<<endl;
        else
            cout<<"Case "<<j++<<": "<<fixed<<setprecision(3)<<fabs(s2-s1)<<endl;
        s1=s2=0;
    }
    return 0;
}
