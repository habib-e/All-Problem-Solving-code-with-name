#include"bits/stdc++.h"
using namespace std;
int getmiss(int a[],int m)
{
    int to=(m+1)*(m+2)/2;
    for(int i=0;i<m;i++) to-=a[i];
    return to;
}
int main()
{
    int n;
    int ar[1001];
    cin>>n;
    for(int i=0;i<n;i++) cin>>ar[i];
    int miss=getmiss(ar,n);
    cout<<miss;
    return 0;
}
