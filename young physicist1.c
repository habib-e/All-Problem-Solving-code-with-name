#include<stdio.h>
int main()
{
    int A[202],i,n,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n*3;i++)
    {
        scanf("%d",&A[i]);
    }
    if(A[0]+A[3]+A[6]==0 && A[1]+A[4]+A[7]==0 && A[2]+A[5]+A[8]==0)
    {
        printf("YES\n");
    }
    else
        printf("NO");
    return 0;
}
