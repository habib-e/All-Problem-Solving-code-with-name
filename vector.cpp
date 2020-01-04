#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<iterator>
#include<algorithm>
//#define size 3
using namespace std;
bool habib(int a,int b){
    return (a>b);
}
int main()
{
    int ar[5]={5 ,3,2,6,2};
    sort(ar+2,ar+5);
    for(int i=0;i<5;i++){
        cout<<ar[i]<<endl;
    }

//    vector<int>vec;
//    vector<int>::iterator it; // vector<int>::iterator = data type
//
//    vec.push_back(10);
//    vec.push_back(6);
//    vec.push_back(3);
//    vec.push_back(9);
//    vec.push_back(55);

//    sort(vec.begin(),vec.end(),habib); // desending sort
//    sort(vec.begin(),vec.begin()+3); // first 3 element sort




//    for(int i=1;i<=5;i++){
//        vec.push_back(i);
//    }

//    for(it=vec.begin();it!=vec.end();it++){
//        cout<<*it<<" ";
//    }

//iterator holo vectorer kono element er dike point kore thake
//    vec.push_back(11);
//    vec.push_back(22);
//    vec.push_back(10);
//    vec.push_back(99);
////    printf("%d\n",vec[0]);
//    cout<<vec.size()<<endl;



//    for(int i=0;i<vec.size();i++){
//        cout<<vec[i]<<"\t";
//    }
//    puts("");

//    it=vec.begin();
//    it++;
//    cout<<*it<<endl;

















    return 0;
}
