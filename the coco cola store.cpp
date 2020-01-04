#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0;
    int cnt=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        while((res=n/3)!=0) //10,n1+3=4,1+1=2,
        {
            n=(n%3)+res;
            cnt+=res;//3+1+
        }
        if(n==2)
            ++cnt;
        cout<<cnt<<endl;
        res=0;
        n=0;
        cnt=0;

    }

    return 0;
}
