#include"bits/stdc++.h"
#include<string>
using namespace std;
int main()
{
    string s,s1;
    int i,flag=0;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='"' && flag==0)
        {
            s[i]='``';
            flag=1;
        }
        if(s[i]=='"'&&flag==1)
        {
//            s[i]=' '' ';
            flag=0;
        }
    }
    for(i=0;i<s.size();i++)
    {
        cout<<s[i];
    }

    return 0;
}
