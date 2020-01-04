
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,sum=0;
    while(true)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
            break;

        if(c-b==b-a)
        {
            sum=c-b;
            cout<<"AP"<<" "<<c+sum<<endl;
            sum=0;
            continue;
        }
        if(c/b==b/a)
        {
            sum=c/b;
            cout<<"GP"<<" "<<c*sum<<endl;
            sum=0;
            continue;
        }
        sum=0;

    }
    return 0;
}

