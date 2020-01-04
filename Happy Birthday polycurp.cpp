#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,m=0,cnt=0,p=0,rem=0,res=0,sum=0,h=0;
    string s;
    cin>>i;
    while(i--)
    {
        cin>>n;
        m=n;
        while(m!=0)
        {
            rem=m%10;
            sum+=rem;
            m/=10;
            cnt++;
        }
        if(cnt==1)
        {
            cout<<n<<endl;
        }
        else
        {
            if(sum==1)
            {
                cout<<((cnt-1)*9)<<endl;
            }
            else
            {
                p=rem;
                h=cnt;
                while(h--)
                {
                    res=(res*10)+p;
                }
                if(n>=res)
                {
                    cout<<((cnt-1)*9)+p<<endl;
                }
                else
                {
                    cout<<(((cnt-1)*9)+p)-1<<endl;
                }
            }
        }
        m=rem=p=res=cnt=sum=h=0;
    }


    return 0;
}
