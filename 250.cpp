/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class myb{
char str[100];
public:
    myb(char *s)
    {
        strcpy(str,s);
    }
    char *get()
    {
        return str;
    }
};
class myd : public myb
{
    int len;
public:
    int getlen()
    {
        return len;
    }
    void show()
    {
        cout<<get()<<endl;
    }
};
int main()
{
    myd ob("hello everyone");
    ob.show();
    cout<<ob.getlen()<<endl;
    return 0;
}
