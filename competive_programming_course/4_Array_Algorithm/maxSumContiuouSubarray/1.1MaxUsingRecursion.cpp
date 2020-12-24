#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Two Pointers apprach
// works for array of non-negative numbers

bool maxSum(ll arr[], ll n, ll sum)
{
    ll far = arr[0];
    ll start = 0;
    for (int i = 1; i <= n; i++)
    {
        // If far exceeds the sum,
        // then remove the starting elements
        while (far > sum && start < (i - 1))
        {
            far -= arr[start];
            start++;
        }
        if (far == sum)
        {
            // for subarray
            // start is starting index
            // i-1 is ending index
            // cout << " start=" << start << ", end=" << (i - 1) << " : ";
            return true;
        }
        if (i < n)
            far += arr[i];
    }

    return false;
}

int main()
{
    ll arr[] = {4, 2, 5, 2, 1};
    ll n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 20; i++)
    {
        cout << i << " " << maxSum(arr, n, i) << endl;
    }
    // cout << " " << maxSum(arr, n, 5) << endl;
}