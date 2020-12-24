// Find the maximum in an array
// Divide the array into two parts and compare minimums of the two parts to get the minimum of the whole array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int iter = 0;

int partition(int arr[], int start, int end)
{
    iter++;
    // if (start > end)
    // {
    //     return 0;
    // }
    // if (start == end)
    // {
    //     return arr[start];
    // }

    if (start == end - 1 || start == end)
    {
        return min(arr[start], arr[end]);
    }
    // cout << "Hello " << endl;
    // printf(" start=%d, end=%d\n", start, end);
    int mid = (start + end) / 2;
    int ans1 = partition(arr, start, mid);
    int ans2 = partition(arr, mid + 1, end);
    printf(" start=%d, end=%d, %d\n", start, end, min(ans1, ans2));
    return min(ans1, ans2);
}

int findMax(int arr[], int n)
{
    return partition(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = findMax(arr, n);

    printf(" iter=%d, ans=%d", iter, ans);
}