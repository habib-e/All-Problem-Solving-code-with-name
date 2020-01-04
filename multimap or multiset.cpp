#include<stdio.h>
#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    //now multiset:
    multiset<int> s;
    multiset<int> :: iterator it;
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(1);
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }

    // this is multimap:
//    multimap<string,int> m;
//    multimap<string,int> :: iterator it;
//    m.insert(make_pair("dipta",42));
//    m.insert(make_pair("dipta",55));
//    m.insert(make_pair("dipta",23));
//    m.insert(make_pair("arnob",45));
//    for(it=m.begin();it!=m.end();it++){
//        cout<<it->first<<" "<<it->second<<endl;
//    }

    return 0;
}
