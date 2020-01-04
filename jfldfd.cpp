#include<bits/stdc++.h>
using namespace std;
int r,n;
long long int s,sum=9999999;
int main()
{
    cin>>r>>n;
    while(n--)
    {
        for(int i=0;i<r;i++)
        {
            cin>>s;
            sum=min(sum,s);
        }
    }
    return 0;
}
