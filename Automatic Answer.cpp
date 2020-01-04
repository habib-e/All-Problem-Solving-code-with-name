#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num;
    int res=0,div=0,add=0,mul=0,div2=0,sub=0,sum=0,sum2=0;
    cin>>t;
    while(t--)
    {
        cin>>num;
        res=num*567;
        div=res/9;
        add=div+7492;
        mul=add*235;
        div2=mul/47;
        sub=div2-498;
        sum=sub%100;
        sum2=sum/10;
        cout<<abs(sum2)<<endl;
        res=div=add=mul=div2=sub=sum=sum2=0;
    }

    return 0;
}
