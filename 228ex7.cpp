#include<bits/stdc++.h>
using namespace std;
class three_d
{
    int a,b,c;
public:
    three_d(int i,int j,int k)
    {
        a=i;
        b=j;
        c=k;
    }
    three_d()
    {
        a=0;
        b=0;
        c=0;
    }
    void get(int &i,int &j,int &k)
    {
        i = a;
        j=b;
        k=c;
    }
    friend three_d operator +(three_d ob,int i);
    friend three_d operator +(int i,three_d ob);
};
three_d operator +(three_d ob,int i)
{
    three_d temp;
    temp.a= ob.a+i;
    temp.b= ob.b+i;
    temp.c= ob.c+i;
    return temp;
}
three_d operator +(int i,three_d ob)
{
    three_d temp;
    temp.a= ob.a+i;
    temp.b= ob.b+i;
    temp.c= ob.c+i;
    return temp;
}
int main()
{
    three_d m(34,64,56);
    int x,y,z;
    m = m + 10;
    m.get(x,y,z);
    cout<<"x : "<<x<<" y : "<<y<<" ";
    cout<<" z : " <<z<<endl;
    m = 20 + m;
    m.get(x,y,z);
    cout<<"x : "<<x<<" y : "<<y<<" ";
    cout<<" z : " <<z<<endl;
}
