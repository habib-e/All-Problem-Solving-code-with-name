#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,j,b;
    string s;
    while(getline(cin,s))
    {
        l=s.size();
        b=-1;
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                for(j=i-1; j>b; j--)
                {
                    printf("%c",s[j]);
                }
                printf(" ");
                b=i;
            }
        }
        for(i=l-1; i>b; i--)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
