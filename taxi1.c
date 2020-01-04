#include<stdio.h>
#define max 100002
int main()
{
    int ar[max];
    int arr1[10]= {0,0,0,0,0,0,0,0,0,0};
    int n,i=0,k=0,j=0,l=0,cnt=0,flag=0,x=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        arr1[ar[i]]=arr1[ar[i]]+1;
    }
    i=arr1[4];
    j=arr1[2]/2;
    flag=arr1[2]%2;
    if(arr1[3]!=0&&arr1[3]>=arr1[1])
    {
        k=arr1[3];
        arr1[1]=0;
        arr1[3]=0;
    }
    else if(arr1[3]!=0&&arr1[3]<arr1[1])
    {
        k=arr1[3];
        arr1[1]=arr1[1]-k;
        arr1[3]=0;
    }
    else if(arr1[3]!=0)
    {
        k=arr1[3];
    }
    if(arr1[1]!=0&&arr1[1]%4==0)
    {
        l=arr1[1]/4;
        arr1[1]=0;
    }
    else if(arr1[1]!=0&&arr1[1]%4!=0)
    {
        l=arr1[1]/4;
        x=arr1[1]%4;
    }
    if(x>2&&flag==1)
        l=l+2;
    else if((x<=2&&x!=0)||flag==1||x>2)
        l++;
    cnt=i+j+k+l;
    printf("%d\n",cnt);
    return 0;


}
