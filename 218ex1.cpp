#include<bits/stdc++.h>
using namespace std;
class coord
{
    int x,y;
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int i,int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    friend coord operator -(coord obj1,coord obj2);
    friend coord operator /(coord obj1,coord obj2);
};
coord operator -(coord obj1,coord obj2)
{
    coord temp;
    temp.x=obj1.x-obj2.x;
    temp.y=obj1.y-obj2.y;
    return temp;
}
coord operator /(coord obj1,coord obj2)
{
    coord temp;
    temp.x=obj1.x/obj2.x;
    temp.y=obj1.y/obj2.y;
    return temp;
}
int main()
{
    coord m(12,22),n(5,6),o;
    int x,y;
    o=m-n;
    o.get_xy(x,y);
    cout<<"(m-n) x : "<<x<<" y : "<<y<<endl;
    o=m/n;
    o.get_xy(x,y);
    cout<<"(m/n) x : "<<x<<" y : "<<y<<endl;
    return 0;
}






