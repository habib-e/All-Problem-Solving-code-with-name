#include<bits/stdc++.h>
using namespace std;
long int ar[110][110];
int main()
{
    int n,m,j,i;
    ar[1][0]=1;
    ar[1][1]=1;
    for(i=2;i<=100;i++)
    {
        ar[i][0]=1;
        for(j=1;j<=i;j++)
        {
            ar[i][j]=ar[i-1][j]+ar[i-1][j-1];
        }
    }
    while(1)
    {
        cin>>n>>m;
        if(!(n|m))return 0;
        cout<<n<<" things taken "<<m<<" at a time is "<<ar[n][m]<<" exactly."<<endl;

    }
    return 0;
}
