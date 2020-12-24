#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

// Problem statement : Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

int main()
{
    int n, rem = 0;
    cin >> n;
    int num = n;

    while (n != 0)
    {
        int k = n % 10;
        rem = rem + k * k * k;
        n = n / 10;
    }
    if (rem == num)
        cout << num << " is armstrong" << endl;
    else
        cout << num << " is not armstrong" << endl;
    return 0;
}