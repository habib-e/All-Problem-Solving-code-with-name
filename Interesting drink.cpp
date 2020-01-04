#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k1,k2,m,p,i,j,k3=0,k4=0,s,f=0,f1=0,k5=0,k6=0;
    vector<int>v;
    vector<int>v1;
    int a[1001],b[1001];
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        for(i=0; i<k1; i++)
        {
            cin>>m;
            v.push_back(m);

        }
        for(i=0; i<k2; i++)
        {
            cin>>p;
            v1.push_back(p);
        }
//        s=max(sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0]));
        for(i=0; i<100000; i++)
        {
            if(v[i]>v1[i])
            {
                k4=v1[i];
                v.push_back(k4);
                v1.pop_back();
//            v.push_back(k4);
            }
            else
            {
                k3=v[i];
                v1.push_back(k3);
                v.pop_back();
            }
            if(v.size()==0){
                f=1;
                break;
            }
            else if(v1.size()==0){
                f1=1;
                break;
            }

        }
        if(f==1)
        {
            cout<<"NO"<<endl;
        }
        else if(f1==1)
        {
            cout<<"YES"<<endl;
        }
        s=f=f1=k3=k4=0;

    }

    return 0;
}
