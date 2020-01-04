#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float a,b,c;
    float uh=0.0,res=0.0,up=0.0,ah=0.0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        uh=(float)(a+b)/3.0;
        up=(float)c/uh;
        ah=(float)a-uh;
        res=(float)(ah*up);
        cout<<res<<endl;
        uh=up=ah=res=0;
    }


    return 0;
}
