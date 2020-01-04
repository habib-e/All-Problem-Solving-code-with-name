
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number to test: ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
        {
            if(num%i==0)
                printf("\n%d",i);
        }
    return 0;
}
