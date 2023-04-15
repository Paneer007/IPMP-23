#include<bits/stdc++.h>
using namespace std;
// min Square matrix 

void maxSquareMatrix(vector<vector<int>>mat){
    int n = mat.size();
    int m = mat[0].size();


    vector<vector<int>>dp (n+1, vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            dp[i][j]= mat[i-1][j-1];
        }
    }

    int maxi = INT_MIN;
    for(int i =1 ; i <= n;i++){
        for(int j=1;j<=m;j++){
            if(dp[i][j]==1){
                int min_a= min(dp[i-1][j],dp[i][j-1]);
                dp[i][j]= 1 + min(min_a, dp[i-1][j-1]);
                maxi = max(maxi, dp[i][j]);
            }
        }
    }
    cout<<maxi<<endl;
}

int main(){
    vector<vector<int>> mat = { { 0, 1, 1, 0, 1 }, { 1, 1, 0, 1, 0 },
                     { 0, 1, 1, 1, 0 }, { 1, 1, 1, 1, 0 },
                     { 1, 1, 1, 1, 1 }, { 0, 0, 0, 0, 0 } };
    maxSquareMatrix(mat);
}