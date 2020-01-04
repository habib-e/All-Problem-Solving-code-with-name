/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class bass
{
public:
    int i;
};
class derive1:virtual public bass{
public:
    int j;
};
class derive2:virtual public bass{
public:
    int k;
};
class derive3:public derive1,public derive2{
public:
    int product()
    {
        return i*i*k;
    }
};
int main()
{
    derive3 ob;
    ob.i=23;
    ob.j=43;
    ob.k=65;
    cout<<"product is "<<ob.product()<<endl;
    return 0;
}
