#include<stdio.h>
int main()
{
    int t,n,v=1;
    int s=0,a,b,i;
    scanf("%d",&n);
    for(t=1; t<=n; t++)
    {
        scanf("%d %d",&a,&b);
        for(i=a; i<=b; i++)
        {
            if(i%2!=0)
                s+=i;
        }
        printf("Case %d: %d\n",v,s);
        v++;
        s=0;
    }
    return 0;
}
