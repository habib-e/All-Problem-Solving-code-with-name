#include<bits/stdc++.h>
using namespace std;
class human
{
public:
    string name;
    int age;
    human(string n,int a)
    {
        name=n;
        age=a;
    }
    bool operator <(human &h)
    {
        if(this->age < h.age)
        {
            return true;
        }
        else
            return false;

    }

};

int main()
{
    human h1("jamal",15);
    human h2("kamal",17);
    if(h1<h2)
        cout<<"h1 is younger than h2"<<endl;
    else
        cout<<"h2 is younger than h1"<<endl;


    return 0;
}
