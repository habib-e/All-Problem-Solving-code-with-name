#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,num,a=0,b=0,i,c=0,d=0,j=1,cnt=0,flag=0;
    cin>>n;
    while(n--)
    {
        flag=0;
        cin>>num;
        for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0 && flag!=1)
            {
                a=num/i;
                flag=1;
                i++;
                c=num/a;
                cnt++;
            }
            if(flag==1)
            {
                if(num%i==0)
                {
                    b=num/i;
                    d=num/b;
                    cnt++;
                }
            }
            if(cnt==2)
                break;

        }
        cout<<"Case #"<<j++<<": "<<num<<" = "<<a<<" * "<<c<<" = "<<b<<" * "<<d<<"\n";
        a=b=c=d=cnt=0;
    }



    return 0;
}
