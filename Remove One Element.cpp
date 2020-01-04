#include<bits/stdc++.h>
using namespace std;
int countIncreasing(int arr[], int N)
{
    int cnt = 0;
    for (int i=1; i<N; i++)
    {
//        Habib:
        if (arr[i] > arr[i-1])
            cnt++;
        else
        {
            if(arr[i-1]<arr[i-2]&&arr[i]>arr[i-2])
            {
                cnt+=2;
                i++;
//                goto Habib;
            }
        }

    }
    return cnt;

}
int main()
{
    int arr[200005]={0};
    long long n,i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>arr[i];
    int N = sizeof(arr)/sizeof(arr[0]);
    cout << countIncreasing(arr, N);
    return 0;
}
