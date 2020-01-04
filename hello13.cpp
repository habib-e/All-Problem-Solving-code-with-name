#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int q,n;
    int ar[1001];
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        if(n==1){
            cout<<"1"<<endl;
            break;
        }
        for(int i=1;i<n;i++)
        {
            if(ar[i]-ar[i-1]<=1){
                cout<<"2"<<endl;
                break;
            }
            else{
                cout<<"1"<<endl;
                break;
            }
        }
    }

    return 0;
}
