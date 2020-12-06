#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long
#define BINSTRTOINT(str) stoi(str, 0, 2)

// stoi()
// overloaded
// stoi(string, idx, radix) // recomended
// stoi(char[], idx, radix)

// stol
// overloaded

int main()
{
    // stoi
    // string str = "10110101"; // = 181
    // int n1 = stoi(str, 0, 2);
    // cout << n1 << endl;

    // char num[] = "10110100"; // = 180
    // int n2 = stoi(num, 0, 2);
    // cout << n2 << endl;

    // stol
    string str = "101011011001110110101"; // = 1422261
    long int n3 = stoi(str, 0, 2);
    cout << n3 << endl;
}
