/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"constructing a "<<endl;
    }
    ~a()
    {
        cout<<"destructing a "<<endl;
    }
};
class b
{
public:
    b()
    {
        cout<<"constructing b"<<endl;
    }
    ~b()
    {
        cout<<"destructing b"<<endl;
    }
};
class c :public a,public b
{
public:
    c()
    {
        cout<<"constructing c"<<endl;
    }
    ~c()
    {
        cout<<"destructing c"<<endl;
    }
};
int main()
{
    c ob;
    return 0;
}

