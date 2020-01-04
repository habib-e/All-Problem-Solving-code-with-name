#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              " "
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    char data[1000];
    FILE * fp;
    fp=fopen("data/file1.txt","w");
    if(fp==NULL)
    {
        cout<<"Unable to create file.\n";
        exit(EXIT_FAILURE);
    }
    cout<<"Enter contents to store in file : \n";
    fgets(data,1000,stdin);
    fputs(data,fp);
    fclose(fp);
    cout<<"file created and saved successfully.";

    return 0;
}
