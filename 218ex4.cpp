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
    friend coord operator--(coord &obj1);
    friend coord operator--(coord &obj1,int h);
};
coord operator --(coord &obj1)
{
   obj1.x--;
   obj1.y--;
    return obj1;
}
coord operator --(coord &obj1,int h)
{
   obj1.x--;
   obj1.y--;
    return obj1;
}
int main()
{
    coord m(12,22);
    int x,y;
    --m;
    m.get_xy(x,y);
    cout<<"(--m) x : "<<x<<" y : "<<y<<endl;
    m--;

    m.get_xy(x,y);
    cout<<"(m--) x : "<<x<<" y : "<<y<<endl;
    return 0;
}
