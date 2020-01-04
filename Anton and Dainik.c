#include<stdio.h>
int main()
{
    int n,i,one=0,two=0;
    char s[100001];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
            one++;
        if(s[i]=='D')
            two++;
    }
    if(one>two)
        printf("Anton\n");
    if(two>one)
        printf("Danik\n");
    if(one==two)
        printf("Friendship\n");
    return 0;
}
