#include<bits/stdc++.h>
using namespace std;
int fd(int a)
{
    while(a>=10)
        a/=10;
    return a;
}

int fdc(int b)
{
    while(b>=10)
        b/=10;
    return b;
}



int main()
{
    int a,b,n,m,rem1=0,rem2=0,x,y;
    cin>>a>>b;
    if(a+1==b || a==b)
    {

        while(b-a!=1 && rem1!=a && rem2!=b)
        {
            rem1=fd(a);
            rem2=fdc(b);
            a++;
            b++;
        }


    }
    else
        cout<<"-1"<<endl;

    cout<<a<<" "<<b<<endl;

    return 0;
}
