#include<bits/stdc++.h>
using namespace std;
class Employee
{
public:
    void name(string a)
    {
        cout<<"Name : "<<a<<endl;
    }
    void age(int a)
    {
        cout<<"Age : "<<a<<endl;
    }
    void dept(string a)
    {
        cout<<"Department : "<<a<<endl;
    }
    void salary(float a)
    {
        cout<<"Salary : "<<fixed<<setprecision(3)<<a<<endl;
    }
};
int main()
{
    Employee E;
    E.name("Umme Dristy");
    E.age(23);
    E.dept("CSE");
    E.salary(30000.0);
    return 0;
}
