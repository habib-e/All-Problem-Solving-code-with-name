#include<stdio.h>
int main()
{
    int i,j,inmax=0,inmin=0,n;
    int max=0,min=111,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
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
    n=n-1;
    if(inmax>inmin)
        inmin=inmin+1;
    inmin=n-inmin;
    sum=inmax+inmin;
    printf("%d",sum);

    return 0;

}
