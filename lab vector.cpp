#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<iterator>
#include<vector>
#include<cctype>
using namespace std;
int main()
{


    vector<string>v;
    vector<string>::iterator it;
    string a;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<v.size(); i++)
    {
        v[i]=toupper(v[i]);
    }

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
























//    vector<int>v;
//    vector<int>::iterator it;
//    int a;
//    for(int i=0;i<5;i++)
//    {
//        cin>>a;
//        v.push_back(a);
//    }
//    for(it=v.begin();it!=v.end();it++)
//    {
//        cout<<*it<<endl;
//    }
    return 0;
}
