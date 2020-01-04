#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int v,t,i=0,j=0;
    int cnt=0,cnt1=0;
    int rem=0,rem1=0,res=0;
    int ar[100];
    int ar1[100];
    int l=0;
    while(v!=0 && t!=0)
    {
        cin>>v>>t;
        rem=v;
        rem1=t;
        while(rem!=0)
        {
            rem=rem%10;
            ar[i]=rem;
//            rem=rem/10;
            i++;
        }
        while(rem1!=0)
        {
            rem1=rem1%10;
            ar1[j]=rem1;
//            rem1=rem1/10;
            j++;
        }
        l=sizeof(ar)/sizeof(ar[0]);
        for(i=1;i<l;i++)
        {
            res=ar[i-1]+ar[i];
            if(res>=10)
                cnt++;
        }
        l=0;
        res=0;
        l=sizeof(ar1)/sizeof(ar1[0]);
        for(i=1;i<l-1;i++)
        {
            res=ar1[i-1]+ar1[i];
            if(res>=10)
                cnt1++;
        }
        l=0;
        res=0;
        if(cnt+cnt1!=0 && cnt+cnt1!=1)
        {
            cout<<cnt+cnt1<<" "<<"carry operations."<<endl;
        }
        else if(cnt+cnt1==1)
            cout<<cnt+cnt1<<" "<<"carry operation."<<endl;
        else
            cout<<"No carry operation."<<endl;



    }


    return 0;
}

