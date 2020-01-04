#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1001];
    gets(str);
    int len,cnt=0,i;
    len=strlen(str);
    sort(str,str+len);
    for(i=0;i<len-1;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            cnt++;
            if(str[i]==str[i+1])
                cnt--;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
