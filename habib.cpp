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
    coord operator +(coord ob2); //Name: Habibullah
    coord operator -(coord ob2); // roll : 18192103080
    coord operator =(coord ob2);
};
coord coord :: operator +(coord ob2)
{
    coord temp;
    temp.x=o3.x+ob2.x;
    temp.y=o3.y+ob2.y;
    return temp;
}
coord coord :: operator-(coord ob2)
{
    coord temp;
    temp.x=o3.x-ob2.x;
    temp.y=o3.y-ob2.y;
    return temp;
}
coord coord :: operator=(coord ob2)
{   x=ob2.x;
    y=ob2.y;
    return *this;
}

int main()
{
    coord o1(10,10),o2(6,6),o3;
    int x,y;
    o3=o1+o2;
    o3.get_xy(x,y);
    cout<<x<<" "<<y<<endl;
    o3=o1-o2;
    o3.get_xy(x,y);
    cout<<x<<" "<<y<<endl;
    o3=o1;
    o3.get_xy(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;

}





