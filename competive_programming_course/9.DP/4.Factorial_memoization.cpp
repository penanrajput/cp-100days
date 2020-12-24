// Memoization method

#include<iostream>
using namespace std;

#define MAXN 100

int solve(int dp[], int x)
{
    if (x==0)
        return 1;
    if (dp[x]!=-1)
        return dp[x];
    return (dp[x] = x * solve(dp,  x-1));
}

int main()
{
    int dp[MAXN];
    for (int i=0; i<MAXN; i++)
    {
        dp[i] = -1;
    }
    cout<<solve(dp, 6)<<endl;
    
    return 0;
}