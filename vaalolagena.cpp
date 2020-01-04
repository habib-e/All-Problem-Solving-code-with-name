#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(a<c)
    {
        if(a+b>c)
        {
            a=c;
            break;
        }
        a+=b;
        if(c-d<a)
        {
            break;
        }
        c-=d;
    }
    cout<<a<<endl;

    return 0;
}
