#include<bits/stdc++.h>
using namespace std;
long long maxp(long long n)
{
    long long mp=-1;
    while(n%2==0)
    {
        mp=2;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            mp=i;
            n/=i;
        }
    }
    if(n>2)
        mp=n;
    return mp;
}
int  main()
{
    long long n=15;
    cout<<maxp(n)<<endl;
    n=600851475143;
    cout<<maxp(n);

}
