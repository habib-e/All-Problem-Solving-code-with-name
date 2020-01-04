#include<stdio.h>
int main()
{
    int sum=0,arr[10],a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    arr[0]=a+b+c;
    arr[1]=(a+b)*c;
    arr[2]=(a*b)+c;
    arr[3]=a*b*c;
    arr[4]=a*(b+c);
    arr[5]=a+(b*c);
    for(i=0;i<6;i++)
    {
        if(arr[i]>sum)
        {
            sum=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
