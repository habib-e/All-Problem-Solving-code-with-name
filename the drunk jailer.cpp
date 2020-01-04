#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,t,cnt=0;
    cin>>t;
    while(t--)
    {
        int a,cnt=0;
        cin>>a;
        int ar[1000]= {0},ar1[1000]= {0};
        for(i=2; i<=a; i++)
        {
            ar[i]=i;
        }
        for(i=1; i<=a; i++)
        {
            for(j=i; j<=a; j+=i)
            {
                if(ar[j]%i==0&&ar1[j]!=1)
                {
                    ar1[j]=1;
                }
                else if(ar[j]%i==0)
                {
                    ar1[j]=0;
                }
            }
        }
        for(i=1; i<=a; i++)if(ar1[i]==1)cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
