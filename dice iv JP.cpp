#include<bits/stdc++.h>
using namespace std;
int ar[500][500];
int f;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<6; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<6; j++)
        {
            if(ar[i][j]==ar[i-1][j-1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            break;
        else
            f=0;
    }
    if(f==0)
        cout<<"YES"<<endl;
    else if(f==1)
        cout<<"NO"<<endl;



    return 0;
}
