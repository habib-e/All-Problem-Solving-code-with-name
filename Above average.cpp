#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum=0,cnt=0;
    int avg=0;
    double res=0.0;
    int ar[1002];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ar[i];
        for(i=0;i<n;i++)
        {
            sum+=ar[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(avg<ar[i])
                cnt++;
        }
        res=(cnt/(double)n);
        res*=100;
        cout<<fixed<<setprecision(3)<<res<<"%"<<endl;
//        printf("%.3lf%\n",(double)res);
        res=0;
        avg=0;
        sum=0;
        cnt=0;

    }

    return 0;
}
