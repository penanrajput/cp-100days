// Find the maximum and minimum element in an array
// Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int iter = 0;

struct Pair
{
    int min;
    int max;
};

struct Pair partition(int arr[], int start, int end)
{
    iter++;
    struct Pair minmax;

    if (start > end)
    {
        minmax.min = 0;
        minmax.max = 0;
        return minmax;
    }
    if (start == end)
    {
        minmax.min = arr[start];
        minmax.max = arr[start];
        return minmax;
    }

    // if (start == end || start == end - 1)
    // {
    //     minmax.min = min(arr[start], arr[end]);
    //     minmax.min = max(arr[start], arr[end]);
    //     printf(" start=%d, end=%d, min=%d max=%d\n", start, end, minmax.min, minmax.max);
    //     return minmax;
    // }

    int mid = (start + end) / 2;
    struct Pair ans1 = partition(arr, start, mid);
    struct Pair ans2 = partition(arr, mid + 1, end);
    // printf(" start=%d, end=%d, %d\n", start, end, min(ans1, ans2));
    struct Pair ans;
    ans.min = min(ans1.min, ans2.min);
    ans.max = max(ans1.max, ans2.max);
    printf(" start=%d, end=%d, min=%d max=%d\n", start, end, minmax.min, minmax.max);
    return ans;
}

struct Pair findMax(int arr[], int n)
{
    return partition(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Pair ans = findMax(arr, n);

    printf("iter=%d, ans.min=%d, ans.max=%d", iter, ans.min, ans.max);
}