#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,w=1,i,j,cnt=0,cnt1=0;
    int ar[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        for(i=1; i<n; i++)
        {
            if(n==1)
                break;
            if(ar[i]>ar[i-1])
            {
                cnt++;
            }
            else if(ar[i-1]>ar[i])
            {
                cnt1++;
            }
        }
        cout<<"Case "<<w<<": "<<cnt<<" "<<cnt1<<endl;
        w++;
        cnt=0;
        cnt1=0;
    }

    return 0;
}
