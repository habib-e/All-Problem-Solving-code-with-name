#include<bits/stdc++.h>
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
    string h;
    int j=1;
    while(cin>>h)
    {
        if(h=="*")
            break;
        else if(h=="Hajj")
            cout<<"Case "<<j++<<": "<<"Hajj-e-Akbar"<<nn;
        else if(h=="Umrah")
            cout<<"Case "<<j++<<": "<<"Hajj-e-Asghar"<<nn;
    }

    return 0;
}
