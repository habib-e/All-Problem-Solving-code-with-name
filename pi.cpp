#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        int ar[100],cnt=0,i,j,k;
        double s;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]%2==0)
            {
                for(j=i+1;j<n;j++)
                {
                    if(ar[j]%2==0)
                    {
                        cnt++;
                    }
                }
            }
            else if(ar[i]%3==0)
            {
                for(j=i+1;j<n;j++)
                {
                    if(ar[j]%3==0)
                    {
                        cnt++;
                    }
                }
            }
            else if(ar[i]%5==0)
            {
                for(j=i+1;j<n;j++)
                {
                    if(ar[i]%5==0)
                    {
                        cnt++;
                    }
                }
            }
        }
        s=((1+(n-1))*(n-1))/2;
        if(cnt==0)
        {
            cout<<"No estimate for this data set."<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(6)<<sqrt(s)<<endl<<s<<endl;
        }
    }

    return 0;
}
