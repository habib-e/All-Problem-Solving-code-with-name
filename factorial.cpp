// C++ program to find factorial of given number
#include<iostream>
using namespace std;

// function to find factorial of given number
unsigned long long int factorial(unsigned long long int n)
{
    if (n == 0)
    return 1;
    return n * factorial(n - 1);
}

// Driver code
int main()
{
   unsigned long long int num = 100;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

// This code is contributed by Shivi_Aggarwal
