#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101],tmp;
    int i,j,k,len;
    while(scanf("%s",str)!=EOF)
    {
        len=strlen(str);
        for(i=0,j=0;j<len;j++)
        {
            if(!isalnum(str[j]) || (j==len-1)){
                if(j<len-1){
                    k=j-1;
                }
                else{
                    k=j;
                }
                while(i<k){
                    tmp=str[i];
                    str[i]=str[k];
                    str[k]=tmp;
                    i++;
                    k--;
                }
                i=j+1;
            }
        }
        printf("%s",str);
        printf("\n");
    }

    return 0;
}
