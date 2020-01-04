#include<bits/stdc++.h>
using namespace std;
int sarch(int arr[],int m,int y)
{
    int j;
    for(j=0;j<m;j++)
    {
        if(arr[j]==y)
            return j;
    }
    return -1;
}

int main()
{
    int ar[100],n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    cout<<x<<" is present at index "<<sarch(ar,n,x);

}
