#include<bits/stdc++.h>
#include<iterator>
#include<map>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              " "
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;
int main()
{
//    map<int>h;
//    map<int>::iterator im;
//    for(im=h.begin();im!=h.end();im++)
//    {
//        cin>>im->first;
//    }
//    for(im=h.begin();im!=h.end();im++)
//    {
//        cout<<im->first;
//    }
    //empty map container
    map<int,int>g;
    //insert element in random order
    g.insert(pair<int,int>(1,40));
    g.insert(pair<int,int>(2,41));
    g.insert(pair<int,int>(3,42));
    g.insert(pair<int,int>(4,43));
    g.insert(pair<int,int>(5,44));
    g.insert(pair<int,int>(6,45));
    g.insert(pair<int,int>(7,46));
    //printing map g
    map<int,int>::iterator it;
    cout<<nn<<"\tthe map g is : "<<nn;
    cout<<"\tkey \telement"<<nn;
    for(it=g.begin();it!=g.end();++it)
    {
        cout<<'\t'<<it->first
            <<'\t'<<it->second<<nn;
    }
    cout<<nn;
    //assigning the element from g to g2
    map<int,int>g2(g.begin(),g.end());
    //printing all element of the map g2
    cout<<"\t the map g2 after"
        <<" assign from g is : "<<nn;
    cout<<"\tkey \telement"<<nn;
    for(it=g2.begin();it!=g2.end();it++)
    {
        cout<<'\t' <<it->first
            <<'\t' <<it->second<<nn;
    }
    cout<<nn;
    //remove all element up to
    //element with key=3 in g2
    cout<<nn<<"g2 after removal of"
                " element less than key=3 :"<<nn;
    cout<<"\tkey \telement"<<nn;
    g2.erase(g2.begin(),g2.find(3));
    for(it=g2.begin();it!=g2.end();it++)
    {
        cout<<'\t'<<it->first
            <<'\t'<<it->second<<nn;
    }
    //remove all elements with key=4
    int n;
    n=g2.erase(4);
    cout<<nn<<"g2.erase(4) : ";
    cout<<n<<" remove"<<nn;
    for(it=g2.begin();it!=g2.end();it++)
    {
        cout<<'\t'<<it->first
            <<'\t'<<it->second<<nn;
    }
    cout<<nn;

    //lower bound and upper bound for map g key=5
    cout<<"g.lower_bound(5) : "
        <<"\tkey = ";
    cout<<g.lower_bound(5)->first<<'\t';
    cout<<"\telement = "
        <<g.lower_bound(5)->second<<nn;
    cout<<"g.upper_bound(5) : "
        <<"\tkey = ";
    cout<<g.upper_bound(5)->first<<'\t';
    cout<<"\telement = "
        <<g.upper_bound(5)->second<<nn;
    return 0;


    return 0;
}
