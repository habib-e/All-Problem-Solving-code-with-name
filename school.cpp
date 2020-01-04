#include<iostream>
using namespace std;
int findparticipants(int L,int T)
{
    return (L+T-1);
}
int main()
{
    int L=10,T=2;
    cout<<findparticipants(L,T);
    return 0;
}
