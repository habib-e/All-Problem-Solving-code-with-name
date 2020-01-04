#include<stdio.h>
int main()
{
    int i,n,count=0;
    int arr[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}
