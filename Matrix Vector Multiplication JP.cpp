#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0,i,j;
int mat[10001][1001],ve[10001];
int main()
{

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(j=0;j<m;j++) cin>>ve[j];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=mat[i][j]*ve[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}
