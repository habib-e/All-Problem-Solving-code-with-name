#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,k,res=0,rem=0,rem1=0,rem2=0;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        rem=n;
        res=n;
        while(rem>=k)
        {
            rem1=rem%k;

            rem/=k;


            res+=rem;
            rem+=rem1;
//            rem2+=rem1;

        }
//        sum=rem2/k;
        cout<<res<<endl;
        rem=0;
        res=0;
        sum=0;
        rem1=0;

    }

    return 0;
}
