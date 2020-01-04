#include<bits/stdc++.h>
using namespace std;
int sum;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(i%3==0)
            sum+=i;
        else if(i%5==0)
            sum+=i;
    }
    cout<<sum;


    return 0;
}
