#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,w1,w2,w3,s,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>s>>w1>>w2>>w3;
        if(w1+w2<=s)
        {
            cnt++;
            if(w3<=s)
            {
                cnt++;
                cout<<cnt<<endl;
                cnt=0;
                continue;
            }
            else
                cnt=0;
        }
        else if(w1+w3<=s)
        {
            cnt++;
            if(w2<=s)
            {
                cnt++;
                cout<<cnt<<endl;
                cnt=0;
                continue;
            }
            else
                cnt=0;
        }
        else if(w2+w3<=s)
        {
            cnt++;
            if(w1<=s)
            {
                cnt++;
                cout<<cnt<<endl;
            }
        }
        else
        {

        }
        cnt=0;
    }
    return 0;
}
