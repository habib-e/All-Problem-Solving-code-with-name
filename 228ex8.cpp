#include<bits/stdc++.h>
using namespace std;
class three_d
{
    int x,y,z;
public:
    three_d(int i,int j,int k)
    {
        x=i;
        y=j;
        z=k;
    }
    three_d()
    {
        x=0;
        y=0;
        z=0;
    }
    void get(int &i,int &j,int &k)
    {
        i=x;
        j=y;
        k=z;
    }
    int operator ==(three_d ob);
    int operator !=(three_d ob);
    int operator ||(three_d ob);
};
int three_d :: operator == (three_d ob)
{
    return x==ob.x && y==ob.y && z==ob.z;
}
int three_d :: operator != (three_d ob)
{
    return x!=ob.x && y!=ob.y && z!=ob.z;
}
int three_d :: operator || (three_d ob)
{
    return x||ob.x && y||ob.y && z||ob.z;
}
int main(){
    three_d m(343,52,23),n(343,2,3),o(0,0,0);
    if(m==m)
        cout<<"m==m"<<endl;
    if(m!=n)
        cout<<"m!=n"<<endl;
    if(o||n)
        cout<<"m or o is true "<<endl;
    return 0;

}
