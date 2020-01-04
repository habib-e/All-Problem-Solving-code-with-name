#include<bits/stdc++.h>
using namespace std;
class area_c1
{
public:
    double height;
    double width;
    double length;
};
class rectangle : public area_c1
{
public:
    double w,h;
    rectangle(double h,double w)
    {
        height=h;
        width=w;

    }
    double area(){
        return width*height;
    }
};
class isosceles : public area_c1
{
public:

    isosceles (double l ,double h)
    {
        height = h;
        length= l;
    }

    double area()
    {
        return 0.5*length*height;
    }
};


int main()
{
    rectangle a1(4,5);
    isosceles b1(6,8);
    cout<<a1.area()<<endl;
    cout<<b1.area()<<endl;

    return 0;
}
