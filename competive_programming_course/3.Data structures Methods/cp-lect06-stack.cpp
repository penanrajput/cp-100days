#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// Stack operations  :
// void     push(datatype)
// datatype pop (void)
// bool     empty(void)
// datatype top(void)

int main()
{
    stack<string> s;
    s.push("apple");
    s.push("guava");
    s.push("pinaaple");
    s.push("mango");

    while (s.empty() == 0)
    {
        string tos = s.top();
        s.pop();
        cout << tos << ", ";
    }
}