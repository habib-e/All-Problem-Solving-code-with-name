#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=0,g=0;
    int ar[1001],a[1001];
    cin>>n;
    if(n==0){
        cout<<"0";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        a[i]=abs(ar[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[0]==ar[i]){
            cout<<a[0];
            g=1;
            break;
        }
        else{
            f=1;
        }
    }
    if(f==1 && g==0)
        cout<<-a[0];

    return 0;
}
