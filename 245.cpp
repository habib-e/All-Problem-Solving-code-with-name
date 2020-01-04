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
public:
    up() { cout<<"Constructing up class\n";}
    ~up() { cout<<"Destructing up class\n";}
};
int main(){
    up o;
    return 0;
}
