#include <bits/stdc++.h>
using namespace std;

int optimalStrategyOfGame(vector<int> arr)
{
    {
        int n = arr.size();
        vector<vector<int>> table(n, vector<int>(n, 0));

        for (int gap = 0; gap < n; ++gap)
        {
            for (int i = 0, j = gap; j < n; ++i, ++j)
            {
                int x = ((i + 2) <= j) ? table[i + 2][j] : 0;
                int y = ((i + 1) <= (j - 1))
                            ? table[i + 1][j - 1]
                            : 0;
                int z = (i <= (j - 2)) ? table[i][j - 2] : 0;

                table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z));
            }
        }

        return table[0][n - 1];
    }
}
// Driver code
int main()
{
    vector<int> arr1 = {8, 15, 3, 7};
    printf("%d\n", optimalStrategyOfGame(arr1));

    return 0;
}