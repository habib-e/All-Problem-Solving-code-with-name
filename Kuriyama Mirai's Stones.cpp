#include<bits/stdc++.h>
using namespace std;
unsigned long long int ar[100005],ar1[100005];
unsigned long long int sum;
int main()
{
    unsigned long long int n,l,r,m,type,i,p;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p;
        ar1[i]=p;
        ar[i]=ar[i-1]+p;
    }
    sort(ar1+1,ar1+n+1);
    for(i=1; i<=n; i++)
        ar1[i]+=ar1[i-1];
    cin>>m;
    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            sum=ar[r]-ar[l-1];
        }
        else
        {
            sum=ar1[r]-ar1[l-1];
        }
        cout<<sum<<endl;
    }


    return 0;
}
