#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int i,j;
double avg,sum2,n,sum,sum1;
double s[1001];
int main()
{

    while(cin>>n)
    {
        sum=sum1=sum2=avg=0;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
            sum+=s[i];

        }
        avg=sum/n;
        for(i=0; i<n; i++)
        {
            sum1=abs(s[i]-avg);
            sum2+=sum1*sum1;
            s[i]=0;
        }
        cout<<fixed<<setprecision(8)<<sqrt(sum2/n)<<endl;

    }
    return 0;
}
