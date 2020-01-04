#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,cnt=0;
    int ar[100005];
    cin>>n;
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    reverse(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        if(ar[0]==ar[i])
            cnt++;
    }
    cout<<cnt<<endl;


    return 0;
}
