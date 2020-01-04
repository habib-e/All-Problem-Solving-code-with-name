#include<bits/stdc++.h>
using namespace std;
int a[101];
int cnt;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[1]=0;
        for(int i=n;i>=2;i--)
        {
            for(int j=2;j<=n;j++)
            {
                if(i%j==0)
                {
                    a[i]++;

                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0)
                cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;

    }


    return 0;
}
