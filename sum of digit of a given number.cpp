#include<bits/stdc++.h>
using namespace std;
long long int n,m;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m>14&&m%14>=1&&m%14<=6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
