#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,s,j=0,z=0,cnt=0,flag=0;
    int ar[101],arr[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&ar[i]);
    scanf("%d",&s);
    for(i=0;i<s;i++)
        scanf("%d",&arr[i]);
    sort(ar,ar+t);
    sort(arr,arr+s);
    for(i=0;i<t;i++)
    {
        for(j=0;j<s;j++)
        {
            if(ar[i]==arr[j] || (ar[i]==(arr[j]-1)) || (ar[i]==arr[j]+1) || (ar[i]+1)==arr[j] || (ar[i]-1)==arr[j])
            {
                cnt++;
//                for(z=j+1;z<s;z++){
//                    arr[z]=arr[z+1];
//                }
                arr[j]=-11;
//                flag=1;
//                j++;
                break;
            }
//            if(flag==0)
//                j++;
//            flag=0;
        }
    }
    cout<<cnt<<"\n";


    return 0;
}
