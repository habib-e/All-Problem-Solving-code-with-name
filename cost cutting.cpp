#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k=1;
    int ar[100];
    cin>>t;
    while(t--)
    {
        for(i=0;i<3;i++)
            cin>>ar[i];
        sort(ar,ar+3);
        cout<<"Case "<<k++<<": "<<ar[1]<<endl;

    }


    return 0;
}
