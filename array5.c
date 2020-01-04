
#include<stdio.h>
int main()
{
    int i,num,j,n,arr[10];
    printf("\n Enter the size of the array : ");
    scanf("%d",&n);
    printf("\n Enter the elements of the array : ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\n Please enter the number which the number has to be deleted : ");
    scanf("%d",&num);
    for(i=0; i<n; i++)
        {
            if(arr[i]==num)
            {
                for(j=i; j<n; j++)
                    arr[j] =  arr[j+1];
            }
        }

    printf("\n the array after deletion is : ");
    for(i=0; i<n-1; i++)
        printf("\t %d",arr[i]);
    getchar();
    return 0;
}
