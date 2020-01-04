//single input nile thik ashse but continuously nile porer gula wrong ashse
#include<bits/stdc++.h>
#include<stdio.h>
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;
int ar[100];
int ar1[100];
int main()
{
    int v,t,i=0,j=0,r=0,r1=0;
    int cnt=0,cnt1=0;
    int rem=0,rem1=0,res=0,sum=0;
    int l=0;
    while(scanf("%d %d",&v,&t)!=EOF)
    {
        if(v==0 && t==0)
            break;
//        cin>>v>>t;
        rem=v;
        rem1=t;
        while(v!=0)
        {
            rem=v%10;
            ar[i]=rem;
            i++;
            v=v/10;

        }
        r=my_sizeof(ar)/my_sizeof(ar[0]);
        reverse(ar,ar+r);
        while(t!=0)
        {
            rem1=t%10;
            ar1[j]=rem1;
            j++;
            t=t/10;

        }
        r1=my_sizeof(ar1)/my_sizeof(ar1[0]);
        reverse(ar1,ar1+r1);
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
        r=0;
        r1=0;
        l=0;
        res=0;
        sum=cnt+cnt1;
        if((sum)!=0 && (sum)!=1)
        {
            cout<<(sum)<<" "<<"carry operations."<<endl;
        }
        else if((sum)==1)
            cout<<(sum)<<" "<<"carry operation."<<endl;
        else
            cout<<"No carry operation."<<endl;
        cnt=0;
        cnt1=0;
        sum=0;
        rem=0;
        rem1=0;
//        static int ar[100];
//        static int ar1[100];


    }


    return 0;
}

