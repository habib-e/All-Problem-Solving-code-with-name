#include<stdio.h>
#define m 100002
int main()
{
    int arr[m],count[10] = {0};
    int i=0,j=0,k=0,l=0,total=0,n,rem2=0,rem1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]] = count[arr[i]]+1;
    }

    i=count[4];
    j=count[2]/2;
    rem2 = count[2]%2;
    if(count[3]!=0&&count[3]>=count[1])
    {
        k=count[3];
        count[1]=0;
        count[3]=0;
    }
    else if(count[3]!=0&&count[3]<count[1])
    {
        k=count[3];
        count[1] = count[1] - k;
        count[3] = 0;
    }
    if(count[1]!=0&&count[1]%4==0)
    {
        l=count[1]/4;
        count[1] = 0;
    }
    else if(count[1]!=0&&count[1]%4!=0)
    {
        l=count[1]/4;
        rem1=count[1]%4;
    }
    if(rem2==1&&rem1>2)
    {
        l=l+2;
    }
    else if((rem1<=2&&rem1!=0)||rem2==1||rem1>2)
    {
        l++;
    }
    total=i+j+k+l;
    printf("%d\n",total);
    return 0;
}
