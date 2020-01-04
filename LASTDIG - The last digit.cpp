#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int modulo(int a,char b[])
{
    int mod=0;
    for(int i=0;i<strlen(b);i++)
        mod=(mod*10+b[i]-'0')%a;
    return mod;
}
int lastdigit(char a[],char b[])
{
    int len_a=strlen(a),len_b=strlen(b);
    if(len_a==1&&len_b==1&&b[0]=='0'&&a[0]=='0')
        return 1;
    if(len_b==1&& b[0]=='0')
        return 1;
    if(len_a==1&& a[0]=='0')
        return 0;
    int exp=(modulo(4,b)==0) ? 4 : modulo(4,b);
    int res = pow(a[len_a - 1]-'0',exp);
    return res%10;
}
int main()
{
    char a[1000],b[10000];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<lastdigit(a,b)<<endl;

    }


    return 0;
}
