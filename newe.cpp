#include<bits/stdc++.h>
using namespace std;
int ar[1000],ar1[1000],ar2[1000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ar[1000]= {0},ar1[1000]= {0},ar2[1000]= {0};
        int n,i,j=1,k=0,sum=0,f=0;
        string s,s1;
        cin>>s>>s1;
        int l=s.size(),l1=s1.size();
        int l2=(l>l1)?l:l1;
        for(i=l-1; i>=0; i--)
        {
            ar[j++]=s[i]-'0';
        }
        j=1;
        for(i=l1-1; i>=0; i--)
        {
            ar1[j++]=s1[i]-'0';
        }
        for(i=l2; i>=1; i--)
        {

            sum=sum+(ar[l--]+ar1[l1--]);
            if(l<1)
            {
                l=0;
            }
            else if(l1<1)
            {
                l1=0;
            }
            ar2[i]=(sum>9)?sum%10:sum;
            sum=(sum>9)?sum/10:0;
        }
        if(sum>0)
        {
            i=0;
            ar2[0]=sum;
        }
        else
            i=1;
        for(j=l2; j>=i; j--)
        {
            if(ar2[j]==0&&f==0)
                continue;
            else
                cout<<ar2[j];
            f=1;
        }
        cout<<endl;

    }
}
