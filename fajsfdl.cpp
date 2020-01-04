// CPP program to find if all prime factors
// of y divide x.
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Returns true if all prime factors of y
// divide x.
bool isDivisible(int x, int y)
{
    int gcd;
    if (y == 1)
        return true;

    if (__gcd(x, y) == 1)
        return false;
    return isDivisible(x,y/gcd);
};

// Driver Code
int main()
{
    int x = 100, y = 98;
    if (isDivisible(x, y))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
