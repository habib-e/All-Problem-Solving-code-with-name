#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        break;
        cout<<min(n,m)<<" "<<max(n,m)<<endl;
    }

    return 0;
}
