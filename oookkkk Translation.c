#include<stdio.h>
#include<string.h>
int main()
{
    char str[110],str1[110];
    int len=0,i,flag=0,count=0,j;
    scanf("%s",str);
    scanf("%s",str1);
    len=strlen(str);
    for(i=0,j=len-1;i!='\0',j>-1;i++,j--)
    {
        if(str[i]==str1[j])
        {
            flag++;
        }
    }
    if(flag==len)
        count=1;
    if(count==1)
        printf("YES\n");
    else
        printf("NO");
    return 0;

}
