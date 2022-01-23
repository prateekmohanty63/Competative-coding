#include <iostream>
#include <vector>
using namespace std;

/// Catalan Number =(2n)! / ((n + 1)!

int countBST(int n)
{
    if (n == 1 || n == 0)
        return 1;

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int x = countBST(i - 1);
        int y = countBST(n - i);
        ans += x * y;
    }
    return ans;
}

/// Using dp

int countBSTDp(int n, int dp[])
{
    if (n == 1 || n == 0)
        return 1;

    int ans = 0;

    if (dp[n] != 0)
    {
        return dp[n];
    }

    for (int i = 1; i <= n; i++)
    {
        int x = countBSTDp(i - 1, dp);
        int y = countBSTDp(n - i, dp);
        ans += x * y;
    }
    return dp[n] = ans;
}

int countBSTBottomUp(int n)
{
    vector<int> dp(n + 1, 0);

    dp[0] = 1, dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            dp[i] += dp[j - 1] * dp[i - j];
        }
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << countBST(n) << endl;

    int Dp[n + 1] = {0};
    cout << countBSTDp(n, Dp) << endl;

    cout << countBSTBottomUp(n) << endl;

    return 0;
}