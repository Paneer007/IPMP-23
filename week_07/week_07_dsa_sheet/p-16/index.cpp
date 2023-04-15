#include <bits/stdc++.h>
using namespace std;
int findWays(int m, int n, int x)
{
    vector<vector<int>> table(n + 1, vector<int>(x + 1, 0));
    for (int j = 1; j <= m && j <= x; j++)
        table[1][j] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= m && k < j; k++)
                table[i][j] += table[i - 1][j - k];

    return table[n][x];
}
int main()
{
    cout << findWays(6, 3, 8) << endl;
    return 0;
}