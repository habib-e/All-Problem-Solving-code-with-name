#include<stdio.h>
#include<stdlib.h>
#define MAX 100
main()
{
    int arr[MAX],i,RandNo;
    for(i=0;i<MAX; i++)
    {
        RandNo = rand() % MAX;
        arr[i]=RandNo;

    }
    printf("\n The contents of the array are : \n");
    for(i=0;i<MAX;i++)
        printf("\t %d",arr[i]);
    getch();
    return 0;
}
