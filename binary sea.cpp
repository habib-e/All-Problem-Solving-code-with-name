//using nbinary search
#include<bits/stdc++.h>
using namespace std;
int ans;
void binary(int N,int arr[],int el)
{
    int start=0,end=N-1,mid;
    ans=0;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==el)
        {
            ans=mid+1;
// break;
            start=mid+1;
        }
//break;
        else if(arr[mid]>el)
            end=mid-1;
        else
            start=mid+1;
    }
}
int main()
{
    int N,arr[99999],sum[99999]= {0},q,el;
    scanf("%d",&N);
    for(int A=0; A<N; A++)
    {
        scanf("%d",&arr[A]);
        sum[A+1]=sum[A]+arr[A];
    }
    sort(arr,arr+N);
    for(int A=0; A<N; A++)
        sum[A+1]=sum[A]+arr[A];
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&el);
        if(arr[N-1]<el)
            printf("%d %d\n",N,sum[N]);
        else if(arr[0]>el)
            printf("0 0\n");
        else
        {
            binary(N,arr,el);
            printf("%d %d\n",ans,sum[ans]);
        }
    }
    return 0;
}
