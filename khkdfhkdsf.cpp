#include<bits/stdc++.h>
using namespace std;
int r,n,cnt;
long int ar[1001];
long int arr[1001];
long int s=999,sum,i,k,l,s2,f;
int main()
{
    cin>>r>>n;
    s=r;
    for(int j=1; j<=n; j++)
    {
        cin>>ar[j];
    }
    for(int j=1;j<=n;j++)
    {
        if(ar[j]%r==0 || ar[j]%r==1)
        {
            s=min(s,ar[j]);
            f=1;
        }
    }
    if(f==1 && s!=0)
        cout<<s<<endl;
    else if(s==0 || f!=1)
        cout<<"-1"<<endl;

    return 0;
}

