#include<bits/stdc++.h>
using namespace std;

void MatrixChainOrder(vector<int>dim){
    int n = dim.size();
    vector<vector<int>> chainMul(n, vector<int>(n,0));
    int diff = n-1;
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            chainMul[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                // q = cost/scalar multiplications
                int q = chainMul[i][k] + chainMul[k + 1][j]
                    + dim[i - 1] * dim[k] * dim[j];
                if (q < chainMul[i][j])
                    chainMul[i][j] = q;
            }
        }
    }

    cout<<chainMul[1][n-1];
    
}

int main(){
    vector<int>dim = {1, 2, 3, 4};
    MatrixChainOrder(dim);
}