#include<stdio.h>
int main()
{
    int A[3][3],uppersum=0,lowersum=0,i,j,sum=0,row,col;
    printf("Enter the number of row and col: ");
    scanf("%d %d",&row,&col);
    printf("Enter the matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //calculating upper sum and lower sum ;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
                uppersum += A[i][j];
            if(i>j)
                lowersum += A[i][j];
        }
    }

    printf("Uppersum is = %d>> Lowersum is = %d",uppersum,lowersum);

    return 0;
}
