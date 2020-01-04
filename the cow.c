#include<stdio.h>
int main()
{
    int row ,col,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(row==col||col+row==n+1)

                printf("*");
                else
                    printf(" ");




    }
    printf("\n");

}

}
