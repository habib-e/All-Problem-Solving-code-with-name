#include<stdio.h>
int main()
{
    int n=4,i,j,temp;
    int data[4] = {5,8,1,6};
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0 && data[j] < data[j+1])
        {
            temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
            j++;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",data[i]);
    return 0;
}
