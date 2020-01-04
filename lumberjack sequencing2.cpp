#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c,p;
    bool up,down;
    cin>>tc;
    cout<<"Lumberjacks:"<<"\n";
    while(tc)
    {
        up=down=false;
        cin>>p;
        for(int i=0;i<9;i++)
        {
            cin>>c;
            if(p<c)
                up=true;
            else
                down=true;
            p=c;
        }
        if(up && down)
            cout<<"Unordered"<<"\n";
        else
            cout<<"Ordered"<<"\n";
        cin>>tc;
    }

    return 0;
}
