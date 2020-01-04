#include<stdio.h>
int main()
{
    int a,b,max=0,sum=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        sum=sum-a;
        sum=sum+b;
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d\n",max);
    return 0;
}
