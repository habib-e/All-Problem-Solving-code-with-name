
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        if(t==0)
            break;
        else
        {
            int sum=(t*(t+1)*(2*t+1))/6;
            cout<<sum<<endl;
        }
    }
    return 0;
}
