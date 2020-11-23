#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(int x)
{
    int count = 0;
    while (x)
    {
        bitset<8> a(x);
        bitset<8> b(x - 1);
        cout << "x=" << a << ",(x-1)=" << b << " " << endl;
        x &= (x - 1);
        count++;


    }
    return count;
}



int main() {
    int n = 45;
    bitset<8> b(n);
    cout << b << endl;
    cout << countSetBits(45) << endl;
}
