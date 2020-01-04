// CPP program to find longest increasing subarray
// with one change allowed.
#include <bits/stdc++.h>
using namespace std;

// Function to find length of
// subsequence
int seg(int a[], int n)
{
    int l[n], r[n+1], ans = 0;

    // calculating the l array.
    l[0] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            l[i] = l[i - 1] + 1;
            ans = max(ans, l[i]);
        }
        else
            l[i] = 1;
    }
    if (ans != n)
        ++ans;

    // calculating the r array.
    r[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < a[i + 1])
            r[i] = r[i + 1] + 1;
        else
            r[i] = 1;
    }

    // updating the answer.
    for (int i = n - 1; i > 0; i--) {
        if (a[i + 1] - a[i - 1] > 1)
            ans = max(ans, l[i - 1] +
                    r[i + 1] + 1);
    }

    return max(ans, r[0]);
}

// driver function.
int main()
{
    long long int N,i;
    int a[]={0};
    cin>>N;
    for(i=0;i<N;i++) cin>>a[i];
    int n = sizeof(a)/sizeof(a[0]);
    cout << seg(a, n);
    return 0;
}
