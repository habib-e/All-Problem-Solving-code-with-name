#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    while(k!=0)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
        {
            n=n/10;
        }
        k--;
    }
    printf("%d\n",n);
    return 0;
}
