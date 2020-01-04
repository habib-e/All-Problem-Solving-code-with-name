#include<stdio.h>
main()
{
    int i,n,count,h,j;
    printf("Prime number from 1 to 100 are : \n");
    scanf("%d %d",&h,&j);
    for(n=h;n<=j;n++)
    {
        count=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && n !=1)
        {
            printf("\nshojib \a has no gf : %d ",n);
        }
    }
    return 0;
}
