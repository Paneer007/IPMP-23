#include <bits/stdc++.h>
using namespace std;

void cutRod(vector<int> prices)
{
    int n = prices.size();
    vector<vector<int>> mat(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                continue;
            }

            if (i == 1)
            {
                mat[i][j] = j * prices[i - 1];
            }
            else
            {
                if (i > j)
                {
                    mat[i][j] = mat[i - 1][j];
                }
                else
                {
                    mat[i][j] = max(prices[i - 1] + mat[i][j - i],
                                    mat[i - 1][j]);
                }
            }
        }
    }

    cout << mat[n][n] << endl;
}

int main()
{
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};
    cutRod(prices);
}