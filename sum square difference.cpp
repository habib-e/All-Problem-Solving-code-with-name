#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum,sum1,diff;
    sum=sum1=diff=0;
    for(x=1;x<=100;x++)
    {
        sum+=(x*x);
        sum1+=x;
    }
    sum1=sum1*sum1;
    diff=sum1-sum;
    cout<<diff<<endl;


    return 0;
}
