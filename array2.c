#include<stdio.h>
int main()
{
    int a,b,c,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,i,count=0,count1=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    r1=a*b*c;
    r2=(a+b)*c;
    r3=a*b+c;
    r4=a*(b+c);
    r5=a+b*c;
    int arr[5]={r1,r2,r3,r4,r5};
    int large=-1111;
    for(i=0;i<5;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("%d",large);
    return 0;
}
