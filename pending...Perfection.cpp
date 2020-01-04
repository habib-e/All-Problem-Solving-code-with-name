#include<bits/stdc++.h>
using namespace std;
int divsum(int num)
{
    int res=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            if(i==(num/i))
            {
                res+=i;
            }
            else
            {
                res+=(i+num/i);
            }
        }
    }
    return (res+1);
}
int main()
{
    int n,num,flag=0;
    int res=0;

    while(scanf("%d",&n)!=EOF)
    {
        if(flag==0){
            cout<<"PERFECTION OUTPUT"<<"\n";
            flag=1;
        }
        if(n==0)
            break;
        else
        {
            num=n;
            res=divsum(num);
            if(res==n){
            printf("%5d  PERFECT\n",n);
            }
            else if(res>n)
                printf("%5d  ABUNDANT\n",n);
            else if(res<n)
                printf("%5d  DEFICIENT\n",n);

        }

    }
    cout<<"END OF OUTPUT"<<"\n";
    return 0;
}

