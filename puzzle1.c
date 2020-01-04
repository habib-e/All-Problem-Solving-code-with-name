#include<stdio.h>
int main()
{
    int i,n,m,j,temp,min;
    int arr[1001];
    scanf("%d %d",&n,&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=i+1; j<m; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    min=arr[n-1]-arr[0];
    for(i=0;i<=m-n;i++)
    {
        if(arr[n+i-1]-arr[i]<min)
        {
            min=arr[n+i-1]-arr[i];
        }
    }
    printf("%d\n",min);
    return 0;

}
