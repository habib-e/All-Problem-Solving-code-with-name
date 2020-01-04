#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,l,i,j,c,sum,fact=1,fact1=1,fact2=1;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
            if(i<=m)
            {
                fact1=fact1*i;
            }
            if(i<=(n-m))
            {
                fact2=fact2*i;
            }
        }
        c=fact/(fact1*fact2);
        cout<<n<<" things taken "<<m<<" at a time is "<<c<<" exactly."<<endl;

    }
    return 0;
}
