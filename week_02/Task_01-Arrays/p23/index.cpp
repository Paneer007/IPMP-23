#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
void PrintSpiralMatrix(vector<vector<int>>mat){
    int i,k=0,l=0;
    int m = mat.size();
    int n = mat[0].size();
    while (k<m && l<n){
        for(i = l;i<n;i++){
            cout<<mat[k][i]<<" ";
        }
        k++;
        for(i=k;i<m;i++){
            cout << mat[i][n - 1] << " ";
        }
        n--;
        if (k<m){
            for(i=n-1;i>=l;--i){
                cout<<mat[m-1][i]<<" ";
            }
            m--;
        }
        if(l<n){
             for (i = m - 1; i >= k; --i) {
                cout << mat[i][l] << " ";
            }
            l++;
        }
    }
}
int main(){
    vector<vector<int>>mat= {{1,    2,   3,   4},
              {5,    6,   7,   8},
             {9,   10,  11,  12},
            {13,  14,  15,  16 }};
    cout<<"no"<<endl;
    PrintSpiralMatrix(mat);
    return 0;
}