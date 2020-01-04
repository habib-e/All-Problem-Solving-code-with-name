#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            sum=sum+(n-(i-1))*(n-(i-1));
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
