#include<stdio.h>
int main()
{
    int mat[6][6];
    int i=1,j=1,flag=0,count=0;
    for(i=1; i<6; i++)
    {
        for(j=1; j<6; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=1; i<6; i++)
    {
        for(j=1; j<6; j++)
        {
            if(mat[i][j]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(i>=3&&j>=3)
    {
        count = (i-3) + (j-3);
    }
    else if(i<3 && j<3)
    {
        count = (3-i) + (3-j);
    }
    else if(i>=3 && j<3)
    {
        count = (i-3) + (3-j);
    }
    else
    {
        count = (3-i) + (j-3);
    }
    printf("%d",count);
}
