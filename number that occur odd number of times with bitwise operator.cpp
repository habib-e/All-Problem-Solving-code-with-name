#include<bits/stdc++.h>
using namespace std;
int getodd(int ar[],int m)
{
    int res=0,i;
    for(i=0;i<m;i++) res^=ar[i];
    return res;
}
int main()
{
    int n,i;
    int ar[10001];
    cin>>n;
    for(i=0;i<n;i++) cin>>ar[i];
    cout<<getodd(ar,n);
    return 0;
}
