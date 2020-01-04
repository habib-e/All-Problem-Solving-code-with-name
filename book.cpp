#include<iostream>
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
    int a,b,d,min1;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    min1=a>b?b:a;
    for(d=2;d<min1;d++)
        if(((a%d)==0) && ((b%d)==0)) break;
    if(d==min1)
    {
        cout<<"No common denominators\n";
        return 0;
    }
    cout<<"The lowest common denominator is \n"<<d;
    return 0;
}
