#include<stdio.h>
float main()
{
    float array[]={15,50,34,20,45,65,10,79,100};
    float n;
    n = sizeof(array);
    printf("Size of the given array is : %f\n",n/sizeof(int));
    return 0;
}
