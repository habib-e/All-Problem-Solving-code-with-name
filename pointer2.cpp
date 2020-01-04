#include<iostream>
using namespace std;
int max(int *a, int *b)
{
    if(*a>*b)
        return *a;
    else
        return *b;
}
int main()
{
    int a,b;
    a=5;
    b=7;
    int r =max(&a,&b);
    cout<<r;
}
