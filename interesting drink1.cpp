#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k1,k2,i,k3=0,k4=0,s,sum=0;
    int a[1001];
    int b[1001];
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        if(k1>k2)
        {
            sum=k1-k2;
        }
        else
        {
            sum=k2-k1;
        }
        for(i=0; i<k1; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<k2; i++)
        {
            cin>>b[i];
        }
        s=min(k1,k2);
        for(i=0;i<s;i++)
        {
            if(a[i]>b[i])
            {
                k3++;
            }
            else
                k4++;
        }
        if(k1>k2)
        {
            k3+=sum;
        }
        else
        {
            k4+=sum;
        }
        if(k3>k4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        s=sum=k3=k4=0;
    }

    return 0;
}

