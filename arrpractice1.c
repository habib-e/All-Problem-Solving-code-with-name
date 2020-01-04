#include<stdio.h>
int main()
{
    int i,n,temp,j,arr[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(j=0;j<n;j++)
        printf("\t %d",arr[j]);
    return 0;
}
