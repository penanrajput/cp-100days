#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

int main()
{

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {9, 6, 3}, {7, 4, 3}};
    int m = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << m << " " << n << endl;
}

// int[][] arr;   // not allowd
// int[1][] arr;  // not allowd
// int[][2] arr;  // allowed
// int[1][2] arr; //  allowd
// int *arr[3];   // allowed
