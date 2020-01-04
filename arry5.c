#include<stdio.h>
int addition(int a,int b,int c);
int main()
{
    printf("the sum is : %d\n",addition(5,6,7));
    printf("the sum is : %d\n",addition(1,2,3));
    printf("the sum is : %d",addition(10,20,30));
    return 0;
}

int addition(int a,int b,int c)
{
    return a+b+c;
}
