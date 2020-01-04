#include<stdio.h>
int main()
{
    int arr[100001],i=0,cnt=1,x=1,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]>=arr[i])
        {
            cnt++;
            if(cnt>x)
                x=cnt;
        }
        else
            cnt=1;
    }
    printf("%d",x);
    return 0;
}
