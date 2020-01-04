#include<stdio.h>
int main()
{
    int A[10][10],traspose[10][10],i,j,row,col;
    printf("Enter the number of row and col : ");
    scanf("%d %d",&row,&col);

    //getting the element for the transpose matrix:

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    //calculating transpose matrix :

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            traspose[j][i] = A[i][j];
        }
    }

    //printing the transpose:

    printf("printing the transpose matrix : \n");


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    //printing transpose matrix :
    printf("\n printing the transpose matrix : \n");

    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",traspose[i][j]);
        }
        printf("\n");
    }







    return 0;
}
