#include<bits/stdc++.h>
using namespace std;
int i,n,ar[10001],max_sum;
int maxsub(int ar[],int siz)
{
    int max_so_far=INT_MIN,max_ending_here=0;
    for(int i=0;i<siz;i++)
    {
        max_ending_here=max_ending_here+ar[i];
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
        if(max_ending_here<0)
            max_ending_here=0;
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
