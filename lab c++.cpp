
#include<bits/stdc++.h>
using namespace std;
class habib
{
public:
    int a,b;
    habib(int x,int y)
    {
        a=x;
        b=y;
    }
    habib operator - (habib &p)
    {
        habib r(0,0);
        r.a=this->a+p.a;
        r.b=this->b+p.b;
        return r;
    }
};

int main()
{
    habib r1(6,6);
    habib r2(5,3);
    habib r3(0,0);
    r3=r2-r1;
    cout<<r3.a<<" "<<r3.b<<endl;


    return 0;
}






#include<bits/stdc++.h>
using namespace std;
class mynus
{
public:
    int x,y;
    mynus()
    {
        x=0;
        y=0;
    }
    mynus(int i,int j)
    {

        x=i;
        y=j;
    }
    void get(int &i,int &j)
    {
        i=x;
        j=y;
    }
    mynus operator +(mynus t1);
};
mynus mynus :: operator +(mynus t1)
{
    mynus t;
    t.x=x+t1.x;
    t.y=y+t1.y;
    return t;

}

int main()
{
    mynus o1(5,6),o2(7,8),o3;
    int x,y;
    o3=o1+o2;
    o3.get(x,y);
    cout<<x<<" "<<y<<endl;


    return 0;
}




#include<bits/stdc++.h>
using namespace std;
class mynus
{
public:
    int a,b,c;
    mynus(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void operator ++()
    {
        a++;
        b++;
        c++;
    }
};

int main()
{
    mynus m(5,6,9);
    ++m;
    cout<<m.a<<" "<<m.b<<" "<<m.c<<endl;


    return 0;
}



#include<bits/stdc++.h>
using namespace std;
class mynus
{
public:
    int a,b;
    mynus(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator -()
    {
        a++;
        b++;
    }
};

int main()
{
    mynus m(5,6);
    -m;
    cout<<m.a<<" "<<m.b<<endl;


    return 0;
}
