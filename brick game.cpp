#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j=1;
    int ar[100];
    int i,res=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        res=ar[(n/2)];
        cout<<"Case "<<j++<<": "<<res<<endl;
        res=0;
    }
    return 0;
}
