#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    x = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << y;
    return 0;
}