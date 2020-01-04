#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
            break;
        if(a<=0||b<=0||c<=0)
            cout<<"wrong"<<endl;
        else if(a*a==b*b+c*c)
            cout<<"right"<<endl;
        else if(b*b==a*a+c*c)
            cout<<"right"<<endl;
        else if(c*c==a*a+b*b)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }

    return 0;
}
