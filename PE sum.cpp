
#include<bits/stdc++.h>
using namespace std;
int sum;
int main()
{
    int n;
    for(int i=1;i<33;i++)
    {
        if(i%2==0)
            sum+=i;
    }
    cout<<sum;


    return 0;
}
