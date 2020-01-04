#include<stdio.h>
#define max 1000
int main()
{
    unsigned long long int n,z;
    unsigned long long int odd[max],even[max],i,j=0,k=0,l=0;
    unsigned long long int marge[max];
    scanf("%I64d %I64d",&n,&z);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            odd[j]=i;
            j++;
        }

    }
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            even[k]=i;
            k++;
        }

    }
    i=0;
    j=0;
    k=0;
    l=0;
    if(n%2==0)
    {
        for(i=0; i<n/2; i++)
        {
            marge[i]=odd[i];
        }
        for(i=0,l=n/2; i<n,l<n; i++,l++)
        {
            marge[l]=even[i];
        }
    }
    else
    {
        for(i=0; i<((n/2)+1); i++)
        {
            marge[i]=odd[i];
        }
        for(i=0,l=((n/2)+1); i<n,l<n; i++,l++)
        {
            marge[l]=even[i];
        }
    }
    printf("%I64d",marge[z-1]);

    return 0;
}
