#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    int sum=0,sum1=0;
    int ar[2000],ar2[2000],ar3[2000];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ar[i];
    for(i=0; i<n; i++)
    {
        if(ar[i]==0)
        {
            ar3[i]=ar[i];
            ar2[i]=ar[i];
        }
        if(ar[i]%2==0)
        {
            ar3[i]=ar[i]/2;
            ar2[i]=ar[i]/2;
        }
        else
        {
            ar2[i]=ar[i]/2;
            ar3[i]=ar[i]/2;
        }








//        sum+=ar[i];
//        if(sum==0)
//        {
//            if(ar[i]==0){
//                ar2[i]=ar[i];
//             continue;
//            }
//            if(ar[i]%2==0){
//                    sum1=ar[i]/2;
//                ar2[i]=sum1;
//            }
//            else
//            {
//                sum2=ar[i]/2;
//
//
//            }
//
//        }
    }
    sort(ar2,ar2+n);
    for(i=0; i<n; i++)
    {
        sum+=ar2[i];
    }
    if(sum==0)
    {
        for(i=0; i<n; i++)
        {
            cout<<ar3[i]<<endl;
        }

    }
    else
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            if(ar3[i]==-)
                ar3[i]=ar3[i]-1;
        }
        for(i=0; i<n; i++)
        {
            sum+=ar3[i];
        }
        if(sum==0)
        {
            for(i=0; i<n; i++)
                cout<<ar3[i]<<endl;
        }

    }
    return 0;
}
