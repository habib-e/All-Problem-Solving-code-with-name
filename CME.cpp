#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
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
    int q,flag=0,i,j;
    char s[110];
    char t[110];
    cin>>q;
    while(q!=0){
        scanf("%s",s);
        scanf("%s",t);
        for(i=0;s[i]!='\0';i++)
        {
            for(j=0;t[j]!='\0';j++)
            {
                if(s[i]==t[j])
                    flag=1;
            }
        }
        if(flag==1)
            cout<<"YES"<<nn;
        else
            cout<<"NO"<<nn;
        flag=0;
        q--;
    }

    return 0;
}
