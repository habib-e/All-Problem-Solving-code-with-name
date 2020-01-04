#include<stdio.h>
int main()
{
    int n,arr[101],i,array[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        array[arr[i]-1]=i+1;
    }
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
    return 0;
}
