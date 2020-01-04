#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s1,c;
    getline(cin,s1);
    for(int i=0;i<s1.size();i++)
    {
        c=toupper(s1[i]);
        cout<<c;
    }


    return 0;
}
