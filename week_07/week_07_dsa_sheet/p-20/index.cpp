#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>freq, int i, int j)
{
    int s = 0;
    for (int k = i; k <= j; k++)
    s += freq[k];
    return s;
}
int optimalSearchTree(vector<int>keys, vector<int>freq)
{
    int n = keys.size();
    vector<vector<int>>cost (n, vector<int>(n,0));
    for (int i = 0; i < n; i++)
        cost[i][i] = freq[i];
    for (int L = 2; L <= n; L++)
    {
        for (int i = 0; i <= n-L+1; i++)
        {
            int j = i+L-1;
            cost[i][j] = INT_MAX;
            int off_set_sum = sum(freq, i, j);
            for (int r = i; r <= j; r++)
            {
            int c = ((r > i)? cost[i][r-1]:0) +
                    ((r < j)? cost[r+1][j]:0) +
                    off_set_sum;
            if (c < cost[i][j])
                cost[i][j] = c;
            }
        }
    }
    return cost[0][n-1];
}


int main(){
    vector<int>keys = {10,12,20};
    vector<int>freq = {34,8,50};
    optimalSearchTree(keys,freq);
    return 0;
}