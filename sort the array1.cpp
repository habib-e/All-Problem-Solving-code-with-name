#include<bits/stdc++.h>
using namespace std;
int i,n,a[100000],b[100000],f,s;
main()
{
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=a[i];
    }
    sort(b, b+n);
    for(i=0; i<n; i++)
        if(a[i]!=b[i])
        {
            f=i;
            break;
        }
    for(i=n-1; i>=0; i--)
        if(a[i]!=b[i])
        {
            s=i;
            break;
        }
    reverse(a+f, a+s+1);
    for(i=0; i<n; i++)
        if(a[i]!=b[i])
        {
            printf("no");
            return 0;
        }
    printf("yes %d %d", f+1,s+1);
}
