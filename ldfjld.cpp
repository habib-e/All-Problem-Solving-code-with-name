#include<bits/stdc++.h>
using namespace std;
int h,m,n,res1,res2,k,a,b,sum,sum1;
int main()
{
    cin>>h;
    while(h--)
    {

        cin>>n>>k;
        m=k;
        if(n%k==0)
        {
            cout<<n<<endl;
            continue;
        }
        if(k/2<1)
        {
            while(m--)
            {
                sum1-=1;
                sum1-=1+1;
                res2+=1;
                res2+=1+1;
                if(res2==n)
                    break;
            }
            cout<<res2<<endl;
        }
        else
        {
            while(m!=0)
            {
                sum-=k;
                sum-=k+1;
                res1+=k;
                res1+=k+1;
                if(res1==n)
                    break;
                m-=2;
            }
            cout<<res1<<endl;
        }
        sum=res1=m=sum1=res2=0;
    }


    return 0;
}
