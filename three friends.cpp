#include<bits/stdc++.h>
using namespace std;
long long int d[10],e[10],f,sum,sum1;
long long int ar[10];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        d[0]=ar[1]-ar[0];
        e[0]=ar[2]-ar[1];

        if(ar[0]==ar[1] && ar[1]==ar[2])
            cout<<"0"<<endl;
        if((d[0]=0||1||2) && (e[0]=0||1||2))
            cout<<"0"<<endl;
        else
        {
            if(ar[1]==ar[2])
            {
                ar[1]--;
                ar[2]--;
                ar[0]++;
                cout<<((ar[1]-ar[0])+(ar[2]-ar[1])+(ar[2]-ar[0]))<<endl;
            }
            else
            {
                ar[1]++;
                ar[2]--;
                ar[0]++;
                cout<<((ar[1]-ar[0])+(ar[2]-ar[1])+(ar[2]-ar[0]))<<endl;


            }
        }


    }


    return 0;
}
