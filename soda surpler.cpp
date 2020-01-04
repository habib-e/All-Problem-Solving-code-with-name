#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,rem=0,res=0,rem1=0,sum=0,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        res=a+b;
        while(res>=c)
        {

            rem=res/c;
            cout<<"h"<<rem;
            rem1=res%c;
            cout<<"h"<<rem1;
            sum+=rem;
            cout<<"h"<<sum;
            res=res/c;
            cout<<"h"<<res;

        }
        if(rem1+rem==c)
            sum++;
        cout<<sum<<endl;
        sum=rem=res=rem1=0;
    }

    return 0;
}
