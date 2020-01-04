#include<bits/stdc++.h>
using namespace std;
int get(int m)
{
    int up=0,ll=0,pro=0,maxx=0,rev=0,num=0;
    for(int i=1;i<=m;i++)
    {
        up=up*10;
        up=up+9;
    }
    ll=(up+1)/10;
    for(int i=up;i>=ll;i--)
    {
        for(int j=i;j>=ll;j--)
        {
            rev=0;
            pro=i*j;
            if(pro<maxx)
                break;
            num=pro;
            while(num!=0)
            {
                rev=rev*10+num%10;
                num/=10;
            }
            if(pro==rev && pro>maxx)
            {
                maxx=pro;
            }
        }
    }
    return maxx;
}
int main()
{
    int n=3;
    cout<<get(n);
    return 0;
}
