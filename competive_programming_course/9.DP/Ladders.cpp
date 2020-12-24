#include <iostream>
using namespace std;

// recursion
int ways1(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    // if (n<0)
    // return 0;
    return ways1(n - 1) + ways1(n - 2);
}

int ways3(int n)
{
    int *arr = new int[n + 1];
    // for(int i=0; i<=n; i++)
    //     arr[i] = -1;
    //  if(n<=0)
    //     return 0;
    // if(n==1)
    //     return 1;

    if (n == 0 || n == 1 || n == 2)
        return n;
    else
        arr[n] = ways3(n - 1) + ways3(n - 2);
    return arr[n];
}

int main()
{
    // cout<<ways1(5)<<endl;
    // cout<<ways1(15)<<endl;
    // cout<<ways1(25)<<endl;

    cout << ways3(4) << endl;
    // cout<<ways3(15)<<endl;
    // cout<<ways3(25)<<endl;
    return 0;
}