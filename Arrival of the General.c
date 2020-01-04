#include<stdio.h>
int main()
{
    int i=0,j=0,inmax=0,inmin=0,n;
    int max=0,min=11111,sum=0;
    scanf("%d",&n);
    int ar[110];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            inmax=i;
        }
        if(ar[i]<=min)
        {
            min=ar[i];
            inmin=i;
        }
    }
    if(inmax>inmin)
    {
        sum=(inmax-1)+(n-inmin)-1;
        printf("%d",sum);
    }
    else
    {
        sum=(inmax-1)+(n-inmin);
        printf("%d",sum);
    }
    return 0;
}
