#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,k;
    int ar[1000];
    ar[1]=1;
    for(i=2; i<=101; i++)
    {
        if(i%2==0||i%3==0)
        {
            ar[i]=ar[i-1];
            continue;
        }
        else
            ar[i]=ar[i-1]+1;
    }
    cin>>k;
    while(k--)
    {
        cin>>i;
        cout<<ar[i]<<endl;
    }
    return 0;
}
