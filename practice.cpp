#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int cnt=0;
    long long int n;
    cin>>n;
    long long int a[13]= {0};
    for(int i=1; i<13; i++)
    {
        a[i]=(pow(10,i)-1);
    }
    for(int i=2; i<13; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            a[i]=a[i]-a[j];
        }
    }

    for(int i=1; i<13; i++)
    {
        if(n-a[i]>=0)
        {
            cnt+=a[i]*i;
            n=n-a[i];
        }
        else
        {
            cnt+=n*i;
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
