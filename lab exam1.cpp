#include<bits/stdc++.h>
using namespace std;
class pen
{
public:
    string a,b;
    string c,d;
    void color();
    void types();
    pen(string a);
    pen(string a,string b);
    void write();

};
pen::pen(string a)
{
    c=a;
    cout<<c<<"color is a well written pen"<<endl;
};
pen::pen(string a,string b)
{
    c=a;
    d=b;
    cout<<c<<"color is a well written "<<d<<" pen ."<<endl;
};
void pen::write()
{
    cout<<"this program is for pen identification "<<endl;
}
int main()
{
    string s,t,v,x;
    cout<<"Enter your color : "<<endl;
    cin>>s;
    pen p(s);
    cout<<"Enter your color and pen types : "<<endl;
    cin>>t>>v;
    pen p1(t,v);
    p.write();
    return 0;
}
