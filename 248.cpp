/*
Mr habib;

*/
/*
 this is not just a bunch of line code it's more than that like
 poem of a writer.
*/
#include<bits/stdc++.h>
using namespace std;
class down{
    int i;
public:
    down(int n) {cout<<"Construncting down class\n"; i=n;}
    ~down() {cout<<"Destructing down class\n";}
    void showi() {cout<<i<<endl;}
};
class up : public down{
    int j;
public:
    up(int n,int m) : down(m) { cout<<"Constructing up class\n"; j=n;}
    ~up() { cout<<"Destructing up class\n";}
    void showj() {cout<<j<<endl;}
};
int main(){
    up o(5,6);
    o.showi();
    o.showj();
    return 0;
}
