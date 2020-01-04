#include<stdio.h>
int main()
{
    int n,i;
    int ar[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    int p;
    scanf("%d",&p);
    ar[p-1]=9;
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);
    return 0;
}
