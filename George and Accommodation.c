#include<stdio.h>
int main()
{
    int n,i=1,a,b,sum=0;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d %d",&a,&b);
        sum=a+b;
        i++;
    }

    return 0;
}
