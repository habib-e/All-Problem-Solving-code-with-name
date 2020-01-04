#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define m 100001
using namespace std;
int main(){
    int n,a,mx=-1;
    int ar[m];
    int most=0;
    int sum=0;
    int sum1=0,sum2=0;
    int flag=0,flag1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        sum1=0;
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j]){
                cnt++;
            }
        }
        if(cnt>mx)
            mx=cnt;
    }
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j]){
                cnt++;
                if(flag==0)
                {
                    sum1=ar[i];
                    flag=1;
                }
                if(flag==0)
                {
                    sum2=ar[j];
                }
            }
            flag=0;
        }

        if(sum1!=0 && sum2!=0)
        {
            if(sum1<sum2)
                most=sum1;
            flag1=1;
        }
        if(cnt==mx && flag1==0)
            most=ar[i];
    }
    cout<<"hello"<<sum1<<" "<<sum2 <<endl;
    cout<<most<<"hello"<<endl;
    for(int i=0;i<n;i++)
    {
        if((ar[i]!=most-1) && (ar[i]!=most+1))
        {
            sum+=ar[i];
        }
    }
    cout<<sum;
    return 0;
}
