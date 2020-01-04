
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int q,n,i,j,res=0,res1=0,flag=0,flag1=0;
    int ar[119],ar3[101],ar4[101];
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>ar[i];
        if(n==1)
            cout<<"1"<<endl;
        if(n==2)
        {
            res=ar[1]-ar[0];
            if((abs(res))>1)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        if(n>2)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    res1=ar[j]-ar[i];
                    if(abs(res1)>=1)
                    {
                        flag1=1;
                        break;

                    }
                }

            }

            if(flag1==1)
            {
                cout<<"2"<<endl;

            }
            else if(flag1==0)
                cout<<"1"<<endl;


        }

        flag1=0;
    }

    return 0;
}
