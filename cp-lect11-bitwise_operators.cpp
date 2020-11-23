#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    // bitwise Operatios :
    // Bitwise and & ,
    // Bitowise Or | ,
    // Bitwise not !. ,
    // Left shift << ,
    // Right sift >> ,
    // Bitwise XOR ^

    int a = 10, b = 15;

    /*
        bitset<8> first(a);
        bitset<8> second(b);
        bitset<8> andOp(a&b);
        bitset<8> orOp(a|b);
        bitset<8> notOp(!a);
        bitset<8> leftShiftOp(a<<1);
        bitset<8> rightShiftOp(a>>1);
        bitset<8> xorOp(a^b);

        cout<< "a           : " << a << " " <<  first << endl;
        cout<< "b           : " << b << " " << second <<  endl;
        cout<< "a&b         : " << (a&b) << " " << andOp << endl;
        cout<< "a|b         : " << (a|b) << " " << orOp << endl;
        cout<< "!a          : " << (!a) << " " << notOp << endl;
        cout<< "leftShift   : " << (a<<1) << " " << leftShiftOp << endl;
        cout<< "rightShift  : " << (a>>1) << " " << rightShiftOp << endl;
        cout<< "xorShift    : " << (a^b) << " " << xorOp << endl;
    */


    cout << bitset<8> (a << 3) << endl;
    int allOnes = pow(2, 3) - 1;

    cout <<  bitset<8> (a << 3 | allOnes) << endl;
    cout <<  bitset<8> (a << 3 ^ allOnes) << endl;
}