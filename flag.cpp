#include<bits/stdc++.h>
#include<math.h>
#define PI acos(-1)
using namespace std;
int main()
{
    int n,i;
    double care,ch,r,reca,len,wid;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>len;
        wid=((6*len)/10);
        r=((2*len)/10);
        care=(PI*r*r);
        ch=(len*wid);
        reca=(ch-care);
        printf("%.2lf %.2lf\n",care,reca);
    }

    return 0;
}
