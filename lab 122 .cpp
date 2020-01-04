#include<bits/stdc++.h>
using namespace std;
class human
{
public:
    string name;
    int time;
    human(string n,int a)
    {
        name=n;
        time=a;
    }
    bool operator <(human &h)
    {
        if(this->time < h.time)
        {
            return true;
        }
        else
            return false;

    }

};

int main()
{
    double d1,d2;
    cin>>d1>>d2;
    human h1("jamal",d1);
    human h2("kamal",d2);
    if(h1<h2)
        cout<<"kamal has faster time"<<endl;
    else
        cout<<"jamal has faster time"<<endl;


    return 0;
}

