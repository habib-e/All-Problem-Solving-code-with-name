#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    m["shommo"]=54;
    m["nazim"]=52;
    m["jahid"]=81;
    m.insert(make_pair("imran",61));
    m.insert(make_pair("nobel",79));
    m.insert(make_pair("habib",80));
//    cout<<m["jahid"]<<endl;
//    it=m.begin();
//    it++;
//    cout<<it->second<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }









    return 0;
}
