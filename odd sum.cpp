
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,sum=0,j=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        cout<<"Case "<<j++<<": "<<sum<<endl;
        sum=0;
    }


    return 0;
}
