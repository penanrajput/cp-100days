#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://www.geeksforgeeks.org/equilibrium-index-of-an-array/

// Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an array A:

// Input: A[] = {-7, 1, 5, 2, -4, 3, 0}
// Output: 3
// 3 is an equilibrium index, because:
// A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

// Input: A[] = {1, 2, 3}
// Output: -1

// Input Format : array, index
// Output Format :     index if equilibrium,
//                     -1 if not equ.

// Method 2 (Efficient one)
// The idea is to get the total sum of the array first. Then Iterate through the array and keep updating the left sum which is initialized as zero. In the loop, we can get the right sum by subtracting the elements one by one
int equilibrium(int arr[], int n)
{
    int sum = 0;
    int left_sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
        if (left_sum == sum)
            return i;
        left_sum += arr[i];
    }

    return -1;
}

void solve()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << equilibrium(arr, n);
}

int main()
{

    solve();
}