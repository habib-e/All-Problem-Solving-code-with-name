#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<string>q;
    q.push("habib");
    q.push("nabil");
    q.push("akib");
    q.push("fahim");
    while(!q.empty()){
        string x;
        x=q.top();
        cout<<x<<endl;
        q.pop();
    }
    return 0;
}
