#include <bits/stdc++.h>
using namespace std;
// Coin Combination 2
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n, 0);
    vector<int> dp(x + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    dp[0]=1;
    for(int i =1 ;i<=n;i++){
        for(int weight = 0;weight<=x;weight++){
            if(weight-coins[i-1] >=0){
                dp[weight] += dp[weight - coins[i - 1]];
            }

        }
    }
    cout << dp[x] << '\n';
    return 0;
}