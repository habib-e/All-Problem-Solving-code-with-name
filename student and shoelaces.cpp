#include<bits/stdc++.h>
using namespace std;
int arr[199];
bool arr1[199][199];
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        arr[i]=0;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x]++,arr[y]++;
        arr1[x][y]=1;
        arr1[y][x]=1;
    }
    queue<int>res;
    while(1)
    {
        bool f=0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]!=1)
                continue;
            arr[i]--;
            res.push(i);
            f=1;
        }
        if(!f)
            break;
        c++;
        while(!res.empty())
        {
            for(int i=1; i<=n; i++)
                if(arr1[res.front()][i])
                    arr[i]--;
            res.pop();
        }
    }
    cout<<c;
}

