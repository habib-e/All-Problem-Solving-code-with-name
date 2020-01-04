/*
Mr habib;

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
    up(int n) : down(n) { cout<<"Constructing up class\n"; j=0;}
    ~up() { cout<<"Destructing up class\n";}
    void showj() {cout<<j<<endl;}
};
int main(){
    up o(5);
    o.showi();
    o.showj();
    return 0;
}

