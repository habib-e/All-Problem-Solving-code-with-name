#include<bits/stdc++.h>
using namespace std;
long long n,i,l,r;
int main()
{
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            l=i;
        break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=b[i]){
        r=i;
        break;
        }
    }
    reverse(a+l,a+r+1);
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;
    return 0;
}
