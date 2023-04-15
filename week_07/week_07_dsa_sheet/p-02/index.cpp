#include <bits/stdc++.h>
using namespace std;
// knapsack

void knapSack(int W, vector<int> weight, vector<int> profit)
{
    vector<vector<int>> dp(profit.size() + 1, vector<int>(W + 1, 0));
    int n = weight.size();
    cout << dp[n][n] << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + profit[i]);
        }
    }
    cout << dp[n][W] << endl;
}
int main()
{
    vector<int> profit = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;
    knapSack(W, weight, profit);
    return 0;
}