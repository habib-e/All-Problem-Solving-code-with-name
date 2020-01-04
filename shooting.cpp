#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = i+1;//ak e shathe sequence count er jonno second
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);//max durability er jonno
    long long res = 0;
    for (int i = 0; i < n; i++)
        res += arr[i].first * i + 1;
    cout << res << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i].second << ' ';
    return 0;
}
