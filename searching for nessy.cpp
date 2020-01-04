#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,res=0,res1=0;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        while(a%3!=0)
        {
            if(a%3!=0)
                a--;
        }
        while(b%3!=0)
        {
            if(b%3!=0)
                b--;
        }
        res=a*b;
        res1=res/9;
        cout<<res1<<endl;
        res=0;
        res1=0;
    }
    return 0;
}
