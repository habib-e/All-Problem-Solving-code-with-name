#include<stdio.h>
int main()
{
    int num,i,j,flag,limit,low;
    scanf("%d%d",&low,&limit);
    for(j=low; j<=limit; j++)
    {
        flag=0;
        for(i=2; i<j; i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        if(flag==0)
            printf("%d  ",j);
    }
    return 0;
}

