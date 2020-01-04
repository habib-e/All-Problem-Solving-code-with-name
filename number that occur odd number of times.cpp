#include<bits/stdc++.h>
int ar[1001];
int a[1001];
int i,j,n;
using namespace std;
int main()
{

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        a[ar[i]]++;
    }
//    for(i=0;i<n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0 && a[i]!=0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
