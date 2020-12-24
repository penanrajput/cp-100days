#include <iostream>
using namespace std;
// recursion
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
// DP top down
int fibDPTopDown(int n)
{
    int *arr = new int[n];

    if (n == 0 || n == 1)
        return n;
    else
        arr[n] = fibDPTopDown(n - 1) + fibDPTopDown(n - 2);
    return arr[n];
}

// Bottom Up
// O(n)
int fibDPBottomUp(int n)
{
    int *arr = new int[100];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main()
{
    // cout<<fib(5)<<endl;
    // cout<<fib(10)<<endl;

    // for(int i=0; i<10; i++)
    // cout<<fibDPTopDown(5)<<endl;
    // cout<<fibDPTopDown(10)<<endl;

    // cout<<fibDPBottomUp(5)<<endl;
    cout << fibDPBottomUp(10) << endl;
    return 0;
}