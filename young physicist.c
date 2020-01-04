#include<stdio.h>
int main()
{
    int A[202][202],i,n,j,sum=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<n;i++)
        {
            sum=sum+A[i][j];
        }
        if(sum==0)
        {
            flag++;
        }
        sum=0;
    }
    if(flag==3)
        printf("YES\n");
    else
        printf("NO");

    return 0;
}
