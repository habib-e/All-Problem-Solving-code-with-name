#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    string name;
    void get_data()
    {
        cin>>id;
        getline(cin,name);
    }
};
int main()
{

    student o1,o2;
    o1.get_data();
    o2=o1;
    cout<<o2.id<<" "<<o2.name<<endl;
    return 0;
}

