#include<bits/stdc++.h>
using namespace std;
int lis[200005],li[200005];
int ar[200005];
int main()
{
    int n,i,j=0,k,f=1,f1=1,cnt=0,cnt1=0,mx=0;
    cin>>n;
    for(i=1; i<=n; i++)cin>>ar[i];
    lis[1]=1;
    for(i=2; i<=n; i++)
    {
        if(ar[i]>ar[i-1])
            lis[i]=lis[i-1]+1;
        else
            lis[i]=1;
        mx=max(mx,lis[i]);
    }
    li[n]=1;
    for(i=n-1; i>=1; i--)
    {
        if(ar[i]<ar[i+1])
            li[i]=li[i+1]+1;
        else
            li[i]=1;
    }
    for(i=1; i<=n; i++)
    {
        if(ar[i-1]<ar[i+1])
            mx=max(mx,lis[i-1]+li[i+1]);
    }
    cout<<mx<<endl;
    return 0;
}
