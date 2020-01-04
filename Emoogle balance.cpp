#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int ar[5000];
    int i,cnt=0,cnt1=0,j=1;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0)
            break;
        int n=t;
        for(i=0; i<n; i++)
            cin>>ar[i];
        for(i=0; i<n; i++)
        {
            if(ar[i]==0)
                cnt++;
            else
                cnt1++;

        }
        cout<<"Case "<<j++<<": "<<cnt1-cnt<<endl;
        cnt=0;
        cnt1=0;
    }


    return 0;
}
