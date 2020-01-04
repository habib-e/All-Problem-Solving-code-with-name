#include<bits/stdc++.h>
using namespace std;
unsigned long long int k,t,i,j,a,b,z,c,h,g,f;
int m[10001][10001];
int n[10001][10001];
int main()
{
    cin>>z>>c>>k>>t;
    while(k--)
    {
        cin>>a>>b;
        m[a][b]=-1;
    }
    while(t--)
    {
        cin>>i>>j;
        n[i][j]+=m[i][j]-1;
    }
    for(i=1;i<=z;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(n[i][j]==-2)
            {
                cout<<"Waste"<<endl;
            }
            else if(n[i][j]==-1)
            {
                n[i][j]+=-2;

                if(f==0)
                {
                    cout<<"Grapes"<<endl;
                    f=1;
                }
                else if(f!=1 && g==0)
                {
                    cout<<"Carrots"<<endl;
                    g=1;
                }
                else if(g!=1 && h==0)
                {
                    cout<<"Kiwis"<<endl;
                    h=1;
                }
                if(n[i][j]=-3)
                {
                    if(h==1)
                    {
                        cout<<"Kiwis"<<endl;
                    }
                    else if(g==1)
                    {
                        cout<<"Carrots"<<endl;
                    }
                    else if(f==1)
                    {
                        cout<<"Grapes"<<endl;
                    }
                }
            }
            h=g=f=0;
        }
    }
    return 0;
}
