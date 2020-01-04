#include<bits/stdc++.h>
using namespace std;
class calculator
{
public:
    void add(int a,int b)
    {
        cout<<"int addition : "<<a+b<<endl;
    }
    void add(double a,double b)
    {
        cout<<"double addition : "<<fixed<<setprecision(3)<<a+b<<endl;
    }
    void sub(int a,int b)
    {
        cout<<"int subtraction : "<<a-b<<endl;
    }
    void sub(double a,double b)
    {
        cout<<"double subtraction : "<<fixed<<setprecision(3)<<a-b<<endl;
    }
    void mul(int a,int b)
    {
        cout<<"int multiplication : "<<a*b<<endl;
    }
    void mul(double a,double b)
    {
        cout<<"double multiplication : "<<fixed<<setprecision(3)<<a*b<<endl;
    }
    void div(int a,int b)
    {
        cout<<"int division : "<<a/b<<endl;
    }
    void div(double a,double b)
    {
        cout<<"double division : "<<fixed<<setprecision(3)<<a/b<<endl;
    }
};
int main()
{
    calculator c;
    c.add(5,6);
    c.add(5.0,6.0);
    c.sub(5,6);
    c.sub(5.0,6.0);
    c.mul(5,6);
    c.mul(5.0,6.0);
    c.div(6,5);
    c.div(6.0,5.0);
    return 0;
}
