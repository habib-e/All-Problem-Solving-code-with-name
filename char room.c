#include<stdio.h>
int main()
{
    int i,n,flag=0;
    int lucky[20] ={4,44,47,444,474,447,477,7,77,74,744,747,777,774};
    scanf("%d",&n);
    for(i=0;i<14;i++)
    {
        if(lucky[i]%n==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO");
    return 0;
}
