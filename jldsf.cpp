#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(long long int i = 1; i<=10000000000000000000; i++)
        if(!(i%60))
            printf("%lld, ", i);
} // result: 60, 180, 300, 420, 540, 660, 780, 900,
