#include<bits/stdc++.h>
using namespace std;
class wow
{
public:
    void hello(unsigned int n)
    {
        if(n>0)
        {
            hello(n-1);
            cout<<n<<"   ";
        }
        return;
    }
};


int main()
{
    unsigned int x;
    wow h;
    cin>>x;
    h.hello(x);
    return 0;
}
