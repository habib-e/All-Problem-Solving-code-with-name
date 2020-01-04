#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int nof(int);
int main()
{
    int i,n,nor=0;
    cin>>n;
    for(i=1;i<=n;i++)
        nor+=nof(i);
    cout<<nor;
    return 0;
}

int nof(int n)
{
    int i,sr,nf=1;
    sr=sqrt(n);
    for(i=2;i<=sr;i++)
    {
        if(n%i==0)
            nf++;
    }
    return nf;
}
