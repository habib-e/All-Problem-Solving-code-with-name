#include<bits/stdc++.h>
using namespace std;
class human
{
public:
    string name;
    human(string n)
    {
        name=n;
    }
    bool operator <(human &s)
    {
        if(this->name < s.name)
        {
            return true;
        }
        else
            return false;



    }

};

int main()
{
    human h1("j");
    human h2("k");
    if(h1<h2)
        cout<<"kamal has faster time"<<endl;
    else
        cout<<"jamal has faster time"<<endl;


    return 0;
}


