#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int sum=0,m,n,i,l,cnt=0;
    char a;
    int ar1[100]={0};
    string s;
    cin>>m>>n;
    cin>>s;
    while(n--)
    {
        cin>>a;
        l=a-'a';
        ar1[l]=1;
    }
    for(i=0;s[i]!='\0';i++)
    {
        l=s[i]-'a';
        if(ar1[l]==1)
        {
            cnt++;
        }
        else
        {
            sum=sum+((cnt*(cnt+1))/2);
            cnt=0;
        }
    }
    if(cnt>0)
     sum=sum+((cnt*(cnt+1))/2);

    cout<<sum<<endl;
    return 0;
}
