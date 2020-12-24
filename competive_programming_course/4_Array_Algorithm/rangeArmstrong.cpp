#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

bool isArmstrong(int num)
{
    int n = num;
    int result = 0;
    while (n > 0)
    {
        int quo = n % 10;
        result += quo * quo * quo;
        n = n / 10;
    }
    if (result == num)
        return true;
    return false;
}

int main()
{
    int start, end;
    cin >> start >> end;
    for (int num = start; num <= end; num++)
    {
        if (isArmstrong(num))
            cout << " " << num << endl;
    }
}