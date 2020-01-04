#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,p,q,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        p=a%10;
        q=b%4;
        if(b==0)
            cout<<"1"<<endl;
        else if(p==1||p==0||p==5||p==6)
            cout<<p<<endl;
        else if(q==1)
            cout<<p<<endl;
        else if(q==2)
            cout<<(p*p)%10<<endl;
        else if(q==3)
            cout<<(p*p*p)%10<<endl;
        else if(q==0)
            cout<<(p*p*p*p)%10<<endl;
    }

    return 0;
}
