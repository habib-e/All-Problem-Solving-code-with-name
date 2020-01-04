#include <bits/stdc++.h>
using namespace std;
void twoWaySort(int arr[5002], int n)
{
    int l = 0, r = n - 1;
    int k = 0;
    while (l < r)
    {
        while (arr[l] % 2 != 0)
        {
            l++;
            k++;
        }
        while (arr[r] % 2 == 0 && l < r)
            r--;
        if (l < r)
            swap(arr[r], arr[l]);
    }
    sort(arr,arr + k);
    sort(arr + k,arr + n, greater<int>());
}
int main()
{
    int arr[5002];
    int w,m;
    while((scanf("%d",&m)!=EOF))
    {

        for(w=0; w<m; w++)
        {
            scanf("%d",&arr[w]);
        }
        int n = sizeof(arr) / sizeof(int);
        twoWaySort(arr, n);
        for (int i = n-1; i >= 0; i--)
            cout << arr[i] <<" ";

        cout<<endl;
    }
    return 0;
}
