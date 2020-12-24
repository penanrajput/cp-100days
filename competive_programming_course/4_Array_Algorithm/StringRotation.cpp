#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
String Rotation
Input: rhdt:246, ghftd:1246
Output: trhd, ftdgh
Explanation:
Here, every string (rhdt : 1246) is associated with a number, separated by semicolon, if sum of
square of digit is even the rotate the string right by 1 position. If square of digit is odd the rotate
the string left by 2 position.
For first case:
2*2+4*4+6*6=84 which is even so rotate string, rotate right by 1 so ”rhdt” will be “trhd”
For second case:
1*1+2*2+4*4+6*6=85 which is odd so rotate string left by 2 so “ghftd” will be “ftdgh”
*/

#define BIT8(n) bitset<8>(n)
#define BIT16(n) bitset<16>(n)
#define BIT(n, k) bitset<k>(n)
#define ll long long

void rotateByI(string str, int len, int i)
{
    string str2(str.begin(), str.begin() + len + 1);
    string ans = string(str2.begin() + i, str2.end());
    string left = string(str2.begin(), str2.begin() + i);
    ans.append(left);
    cout << ans;
}

int main()
{
    string str;
    int len = 0;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ':')
        {
            len = i - 1;
            break;
        }
    }
    // [0, len] is string
    // len+1 is :
    // [len+2, n-1] is numbers
    int sum = 0;
    for (int i = len + 2; i <= (n - 1); i++)
    {
        int num = (int)str[i] - 48;
        // cout << num << ", ";
        sum += num * num;
    }
    if (sum & 1)
        rotateByI(str, len, 2);
    else
        rotateByI(str, len, 1);
}

// char to int;
// int num = (int) c - 45