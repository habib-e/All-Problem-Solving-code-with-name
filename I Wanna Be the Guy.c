#include<stdio.h>
int main()
{
    int n,i,ar[110],ar1[110],ar2[220];
    int j=0,k=0;
    int count=0;
    int p,q;
    scanf("%d %d",&n,&p);
    for(i=0; i<p; i++)
        scanf("%d",&ar[i]);
    scanf("%d",&q);
    for(i=0; i<q; i++)
        scanf("%d",&ar1[i]);
    int w=n;
    int y=n;
    int x=n-1;
    int z=p+q;
    int l=0;
    for(i=0; i<p; i++)
    {
        ar2[i]=ar[i];
    }
    for(i=0,l=p; i<q,l<z; i++,l++)
    {
        ar2[l]=ar1[i];
    }
    for(j=1; j<=w; j++)
    {
        for(i=0; i<z; i++)
        {
            if(ar2[i]==j)
            {
                count++;
                break;
            }
        }
    }
    if(count==w)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
