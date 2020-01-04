#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow((-1),i)*i;
    }
    printf("%d",sum);
    return 0;
}
