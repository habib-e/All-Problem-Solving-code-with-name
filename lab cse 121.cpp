#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s(10,'A');
    string s1,s2;

    cin>>s1;
    s2=s+s1;
    int i,cnt=0;
    for(i=0;s2[i]!='\0';i++)
    {
        if(s2[i]=='A')
            cnt++;
    }
    cout<<cnt<<endl;
    cout<<s2<<endl;

    return 0;
}
