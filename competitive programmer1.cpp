#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s;
        int a=0;
        int b=0;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                a++;
            int num=s[i]-'0';
            if(s[i]%2==0)
                b++;
            ans+=num;
        }
        if(ans%3==0&&a>=1&&b>1)
        {
            cout<<"red"<<endl;
        }
        else
        {
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}
