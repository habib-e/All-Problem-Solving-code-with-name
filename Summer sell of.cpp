// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<cstdlib>
#include<cstdio>
#include<string>
using namespace std;
unsigned long long int m,f;

// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
int permute(string a, int l, int r)
{


	// Base case
	if (l == r)
    {
        stringstream h(a);
        h>>m;
        if(m%60==0)
        {
            f++;
            if(f==1){
            cout<<"red"<<endl;
            f++;
            }
            return 0;
        }
    }

	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}

}

// Driver Code
int main()
{
    int n1,k;
    cin>>n1;
    while(n1--)
    {
        string str;
        cin>>str;
	int n = str.size();
	permute(str, 0, n-1);

    }

	return 0;
}
