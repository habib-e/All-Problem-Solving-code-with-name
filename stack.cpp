#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(154);
    s.push(452);
    s.push(445);
    while(!s.empty()){
        int x;
        x=s.top();
        cout<<x << endl;
        s.pop();
    }




//    s.pop();
//    cout<<s.top()<<endl;
    return 0;
}
