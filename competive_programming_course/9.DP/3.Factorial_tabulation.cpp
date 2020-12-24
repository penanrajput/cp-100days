// tabulation method

#include <iostream>
using namespace std;

#define MAXN 100

long long int factorial(long long int dp[], int n)
{
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        dp[i] = dp[i - 1] * i;

    return dp[n];
}

int main()
{
    long long int dp[MAXN];
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    // cout << factorial(dp, 10) << endl;

    return 0;
}