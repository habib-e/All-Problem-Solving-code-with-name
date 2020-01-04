#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
//    char s[2004];
    char s[2003];
    int j=1,len=0,i=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    char A[]="HELLO";
    char B[]="HOLA";
    char C[]="HALLO";
    char D[]="BONJOUR";
    char E[]="CIAO";
    char F[]="ZDRAVSTVUJTE";
    char G[]="#";
    while(scanf("%s",s)!=EOF)
    {
        g=strcmp(s,G);
        if(g==0)
            break;
//        if(s=='#')
//            break;
        a=strcmp(s,A);
        b=strcmp(s,B);
        c=strcmp(s,C);
        d=strcmp(s,D);
        e=strcmp(s,E);
        f=strcmp(s,F);

        if(a==0)
        {
            cout<<"Case "<<j<<": "<<"ENGLISH"<<endl;
            j++;
            continue;
        }
        else if(b==0)
        {
            cout<<"Case "<<j<<": "<<"SPANISH"<<endl;
            j++;
            continue;

        }
        else if(c==0)
        {
            cout<<"Case "<<j<<": "<<"GERMAN"<<endl;
            j++;
            continue;

        }
        else if(d==0)
        {
            cout<<"Case "<<j<<": "<<"FRENCH"<<endl;
            j++;
            continue;

        }
        else if(e==0)
        {
            cout<<"Case "<<j<<": "<<"ITALIAN"<<endl;
            j++;
            continue;

        }
        else if(f==0)
        {
            cout<<"Case "<<j<<": "<<"RUSSIAN"<<endl;
            j++;
            continue;

        }
        else
            cout<<"Case "<<j<<": "<<"UNKNOWN"<<endl;
            j++;

    }

    return 0;
}
