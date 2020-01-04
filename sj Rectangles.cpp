#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,side,sum;
    cin>>side;
    sum=0;
    for(i=1; i<=side; i++)
    {
        n=sqrt(i);
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                ++sum;
        }
    }
    cout<<sum;
    return 0;
}
