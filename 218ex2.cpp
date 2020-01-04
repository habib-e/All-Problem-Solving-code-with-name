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
    friend coord operator *(coord obj1,int i);
    friend coord operator *(int i,coord obj2);
};
coord operator *(coord obj1,int i)
{
    coord temp;
    temp.x=obj1.x*i;
    temp.y=obj1.y*i;
    return temp;
}
coord operator *(int i,coord obj2)
{
    coord temp;
    temp.x=obj2.x*i;
    temp.y=obj2.y*i;
    return temp;
}
int main()
{
    coord m(12,22),o;
    int x,y;
    o=m*4;
    o.get_xy(x,y);
    cout<<"(m*4) x : "<<x<<" y : "<<y<<endl;
    o=6*m;
    o.get_xy(x,y);
    cout<<"(6*m) x : "<<x<<" y : "<<y<<endl;
    return 0;
}
