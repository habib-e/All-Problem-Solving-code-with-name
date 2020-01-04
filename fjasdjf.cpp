#include<stdio.h>
int main()
{
    int a[100000],i,sum=0,n,t;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    t=sum/4;
    if(sum%4==0)
        printf("%d\n",t);
    else
        printf("%d\n",t+1);

    return 0;
}
