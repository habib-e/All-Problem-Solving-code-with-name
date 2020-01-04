#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0;
    string s;
    string m="ROYGBIV";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<m[j++];
        if(j==7)
            j=(i%4)+1;
    }
    return 0;
}
