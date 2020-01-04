/*
Mr habib;

*/
#include<bits/stdc++.h>
using namespace std;
class down{
public:
    down() {cout<<"Construncting down class\n";}
    ~down() {cout<<"Destructing down class\n";}
};
class up : public down{
    int j;
public:
    up(int n) { cout<<"Constructing up class\n"; j=n;}
    ~up() { cout<<"Destructing up class\n";}
    void showj() {cout<<j<<endl;}
};
int main(){
    up o(5);
    o.showj();
    return 0;
}
