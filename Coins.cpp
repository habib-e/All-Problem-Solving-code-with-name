#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int H,I,J;
char s[10];
char t[10];
int main()
{
    char h[5],i[5],j[5];
    int t=3;
    for(int k=0; k<3; k++)
    {
        cin>>h>>i>>j;
        h[k]=h[k]-'0';
        i[k]=i[k]-'0';
        j[k]=j[k]-'0';
        if(i=="<")
        {
            j[k]++;
            h[k]--;
        }
        else if(">")
        {
            h[k]++;
            j[k]--;
        }
        s[k]=max(h[k],j[k]);
        t[k]=min(h[k],j[k]);
    }
    A=B=C=0;
    for(int k=0; k<3; k++)
    {
        if(s[k]=='A' || t[k]=='A')
            c1++;
        else if(s[k]=='B' || t[k]=='B')
            c2++;
        else if(s[k]=='C' || t[k]=='C')
            c3++;
    }

    return 0;
}
