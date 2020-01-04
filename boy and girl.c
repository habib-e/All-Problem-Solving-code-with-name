#include<stdio.h>
#include<string.h>
int main()
{
    char string[150],len;
    int i=0,count=0,arr[150];
    scanf("%s",string);
    for(i=0;i<130;i++)
    {
        arr[i]=0;
    }
    for(i=0;string[i]!='\0';i++)
    {
        len=string[i];
        arr[len] = 1;
    }
    for(i=0;i<130;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
