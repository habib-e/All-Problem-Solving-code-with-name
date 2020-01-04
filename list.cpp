#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<queue>
#include<string>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    int ar[5] = {3,5,4,2,7};

    list<int>mylist(ar,ar+5);+

    list<int>::iterator it;



    mylist.pop_front();
    mylist.pop_front();

    cout<<mylist.front()<<endl;








//    if(mylist.empty()){
//        cout<<"Empty"<<endl;
//    }
//    else{
//        cout<<"Failed"<<endl;
//    }

//    it=find(mylist.begin(),mylist.end(),4);
//    mylist.erase(it);
//    it=find(mylist.begin(),mylist.end(),3);
//    mylist.erase(it);
//    it=mylist.begin();
//    it++;

//    it=find(mylist.begin(),mylist.end(),3);//find 4 and insert 7 there

//    if(it==mylist.end()){
//        cout<<"Not Found"<<endl;
//    }
//    else{
//        cout<<"Found"<<endl;
//    }


//    cout<<*it<<endl;

//    mylist.insert(it,7);

//    for(it=mylist.begin();it!=mylist.end();it++){
//        cout<< *it<<"\t";
//    }



    cout<<endl;
    return 0;
}
