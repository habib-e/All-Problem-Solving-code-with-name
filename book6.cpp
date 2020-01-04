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
    int a,b;
    char ch;
    cout<<"do you want to : "<<nn;
    cout<<"add,subtract,multiply,divide"<<nn;
    do{
        cout<<"enter first letter : ";
        ch=getchar();

    }while(ch!='A' && ch!='S' && ch!='M' && ch!='D');
    cout<<nn;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    switch(ch)
    {
        case 'A':cout<<a+b;
        break;
        case 'S':cout<<a-b;
        break;
        case 'M':cout<<a*b;
        break;
        case 'D':cout<<a/b;
    }
    return 0;
}
