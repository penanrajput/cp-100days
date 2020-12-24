#include <bits/stdc++.h>
using namespace std;

// Using recursion, not ideal
int factorial(int n)
{
    while (1)
    {
        if (n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }
}
int main()
{
    int n = 4;
    int result = factorial(n);
    cout << result;
}