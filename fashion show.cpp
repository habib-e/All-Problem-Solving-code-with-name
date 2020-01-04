#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int man1,man2;
    int sum1=1,sum2=1,sum=0;;
    cin>>n;
    while(n--)
    {
        cin>>m;
        while(m--)
        {
            cin>>man1>>man2;
            sum1*=man1;
            sum2*=man2;
        }
        sum=sum1+sum2;
        cout<<sum<<endl;
        sum1=sum2=sum=0;
    }

    return 0;
}
