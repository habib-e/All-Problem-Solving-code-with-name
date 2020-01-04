#include<stdio.h>
int main()
{
    int i,n,arr[20],temp;
    int small=9999,smallpos=0;
    int large=-9999,largepos=0;
    printf("enter the num of elements in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("the value of elements %d: \n",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            smallpos=i;
        }
        if(arr[i]>large)
        {
            large=arr[i];
            largepos=i;
        }
    }
    printf("small=%d\t smallpos=%d\t",small,smallpos);
    printf("large=%d\t largepos=%d\t",large,largepos);
    temp=arr[largepos];
    arr[largepos]=arr[smallpos];
    arr[smallpos]=temp;
    printf("the new array : \n");
    for(i=0;i<n;i++)
        printf("\n arr[%d]=%d",i,arr[i]);
    return 0;
}
