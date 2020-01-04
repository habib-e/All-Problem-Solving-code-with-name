#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g,h;
int mnn,mxx;
unsigned long long int sum1;
int main()
{
    cin>>a>>b>>c>>d>>e>>f;
    mxx=max(e,f);
    if(mxx==e)
    {
        mnn=min(a,d);
        sum1+=(mnn*mxx);
        d-=mnn;
        if(d>0)
        {
            mnn=min(b,min(c,d));
            sum1+=(mnn*f);
        }
    }
    else
    {
        mnn=min(b,min(c,d));
        sum1+=(mnn*mxx);
        d-=mnn;
        if(d>0)
        {
            mnn=min(a,d);
            sum1+=(mnn*e);
        }
    }
    cout<<sum1<<endl;
    return 0;
}
