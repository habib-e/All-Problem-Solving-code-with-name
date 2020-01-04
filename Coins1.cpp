#include<bits/stdc++.h>
using namespace std;
string s;
int x[3];
main()
{
    for(int i=0; i<3; i++)
    {
        cin>>s;
        if(s[1]=='>')
            x[s[0]-'A']++;
        else
            x[s[2]-'A']++;
    }
    if(x[0]==x[1]||x[1]==x[2]||x[2]==x[0])
        cout<<"Impossible";
    else
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                if(i==x[j])
                    cout<<char('A'+j);
    }
}
