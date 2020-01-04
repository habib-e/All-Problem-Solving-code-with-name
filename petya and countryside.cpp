#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int i,j,n,a[1001],r;
int main()
{
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
    for (i=0; i<n; i++)
    {
        for (j=i; j<n-1 && a[j+1]>=a[j];)
        {
            j++;
            cout<<"j1="<<j<<" ";

        }
        for (; j<n-1 && a[j+1]<=a[j];)
        {
            j++;
            cout<<"j2="<<j<<" ";

        }
        if (j-i+1>r)
            r=j-i+1;
        cout<<"r="<<r<<" ";
    }
    printf("%d\n",r);
    return 0;
}
