#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    pair<int,int>arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    long long res=0;
    for(i=0;i<n;i++)
    {
        res+=arr[i].first*i+1;
    }
    cout<<res<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i].second<<" ";
    return 0;
}
