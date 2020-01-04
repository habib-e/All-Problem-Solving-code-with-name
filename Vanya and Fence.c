#include<stdio.h>
int main()
{
    int n,h,a[2001],i,one=0,flag=0;
    int count=0,count1=0;
    scanf("%d %d",&n,&h);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        if(a[i]==h)
        {
            one++;
            count++;
        }
        else if(a[i]<=h)
        {
            count++;
        }
        else if(a[i]>h)
        {
            count1++;

        }
    }
    int res=count+count1*2;
    if(one==n)
        printf("%d",one);
    else
        printf("%d",res);

    return 0;
}
