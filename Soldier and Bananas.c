#include<stdio.h>
int main()
{
    int k,n,w,i,sum=0,x;
    scanf("%d %d %d",&k,&n,&w);

    for(i=1; i<=w; i++)
    {
        sum = sum+k*i;
    }
    x=sum-n;
    if(x>0)
    {
        printf("%d",x);
    }
    else
        printf("0");
    return 0;
}
