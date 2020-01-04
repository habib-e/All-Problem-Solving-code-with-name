#include<stdio.h>
int main()
{
    char str[101],str1[200],str2[200];
    int i=0,j=1,k=0;
    scanf("%s",str);
    while(str[i]!=0)
    {
        if((str[i]=='u'||str[i]=='U')||(str[i]=='y'||str[i]=='Y')||(str[i]=='a'||str[i]=='A')||(str[i]=='e'||str[i]=='E')||(str[i]=='i'||str[i]=='I')||(str[i]=='o'||str[i]=='O'))
        {
            i++;
            continue;
        }
        else
        {
            str1[k]='.';
            if(str[i]>='A' && str[i]<='Z')
                str1[j]=str[i]+32;
            else
            {
                str1[j]=str[i];
            }
            k+=2;
            j+=2;
        }
        i++;

    }
    str1[k]='\0';
    printf("%s",str1);
    return 0;


}
