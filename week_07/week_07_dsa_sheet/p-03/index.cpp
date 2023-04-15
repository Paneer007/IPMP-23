#include<bits/stdc++.h>
using namespace std;

// min cost path 
void minCostPath(vector<vector<int>>cost){
    int n = cost.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MAX));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 && j==1){
                dp[i][j]=cost[i-1][j-1];
                continue;
            }
            int min_a=min(dp[i-1][j],dp[i][j-1]);
            int min_b = min(min_a, dp[i-1][j-1]);
            dp[i][j]=min_b+cost[i-1][j-1];
        }
    }
    cout<<dp[n][n]<<endl;
}


int main(){
    vector<vector<int>> cost = {{ 1, 2, 3 }, { 4, 8, 2 }, { 1, 5, 3 }};
    minCostPath(cost);
    return 0;
}