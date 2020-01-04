/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class vehi
{
    int num_wh;
    int range;
public:
    vehi(int w,int r)
    {
        num_wh=w;
        range=r;
    }
    void showv()
    {
        cout<<"wheels : "<<num_wh<<endl;
        cout<<"range : "<<range<<endl;
    }
};
class car: public vehi
{
    int pass;
public:
    void show()
    {
        showv();
        cout<<"passengers : "<<pass<<endl;
    }
};
class truk: public vehi
{
    int loadlimit;
public:
    void show()
    {
        showv();
        cout<<"loadlimit "<<loadlimit<<endl;
    }
};
int main()
{
    car c(43,343,43233);
    truk t(34343,43,343434);
    cout<<"car : "<<endl;
    c.show();
    cout<<"truk : "<<endl;
    t.show();
    return 0;
}
