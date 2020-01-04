#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,baki=0,x=0,ans=0;
        cin>>a>>b;
        x=a/b;
        baki=a-(x*b);
        ans=min(baki,(b/2));
        cout<<(x*b)+ans<<endl;
    }
    return 0;
}
