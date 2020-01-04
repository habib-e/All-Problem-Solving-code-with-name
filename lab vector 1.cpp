#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<iterator>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
    vector<char>v(100);
    vector<char>a(100);
    int i;
    for(i=0;i<v.size();i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<v.size(); i++)
    {
        v[i]=toupper(a[i]);
    }
    for( i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }



    return 0;
}
