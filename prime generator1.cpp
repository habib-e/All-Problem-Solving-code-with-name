#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

bool checkprime(long int num)
{
    if(num<=1)
        return false;
    else if(num==2)
        return true;
    else if(num%2==0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        int upperlimit = sqrt(num)+1;
        while(divisor<=upperlimit)
        {
            if(num%divisor==0)
                return false;
            divisor+=2;
        }
        return prime;
    }
}
int main()
{
    int a,b,i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        for(j=a;j<=b;j++)
        {
            if(checkprime(j))
                cout<<j<<endl;
        }
        cout<<endl;
    }

    return 0;
}
