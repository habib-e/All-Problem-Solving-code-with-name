#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if((x<=3&&y>3)||(x==1&&y!=1))
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
}
