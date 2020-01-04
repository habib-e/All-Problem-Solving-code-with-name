#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d",&n);
    for(int t=1; t<=n; t++)
    {
        int s=0;
        scanf("%d %d",&a,&b);
        if(a%2==0 && b%2==0)
            a=a+1, b=b-1;
        if(a<b)
        {
            for (i=a; i<=b; i=i+2)
            {
                s=s+i;
            }
        }
        else
        {
            for (i=b; i<=a; i=i+2)
            {
                s=s+i;
            }
        }
        printf("Case %d: %d\n",t,s);
    }
    return 0;
}
