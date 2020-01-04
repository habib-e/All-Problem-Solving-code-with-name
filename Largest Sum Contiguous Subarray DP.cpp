#include<bits/stdc++.h>
using namespace std;
int i,n,ar[10001],max_sum;
int maxsub(int ar[],int siz)
{
    int max_so_far=ar[0];
    int cur_max=ar[0];
    for(int i=0;i<siz;i++)
    {
        cur_max=max(ar[i],cur_max+ar[i]);
        max_so_far=max(max_so_far,cur_max);
    }
    return max_so_far;
}
int main()
{
    cin>>n;
    for(i=0;i<n;i++) cin>>ar[i];
    max_sum=maxsub(ar,n);
    cout<<"Maximum contiguous sum is : "<<max_sum;
    return 0;
}
