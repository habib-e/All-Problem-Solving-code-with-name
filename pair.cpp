#include<stdio.h>
#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,string> >v;
    vector<pair<int,string> >::iterator it;
    v.push_back(make_pair(21,"dipta"));
    v.push_back(make_pair(22,"nabil"));
//    cout<<v[1].second<<endl;

    for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }









//    pair<string,int> p;//("dipta",33)
////    p.first = "dipta";
////    p.second = 44;
//    p=make_pair("dipta",21);
//    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
