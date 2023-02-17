#include<bits/stdc++.h>
using namespace std;
void turnByNinety(vector<vector<int>>arr){
    int m = arr.size();
    int n = arr[0].size();
    auto duplicateArr = vector<vector<int>>(n,vector<int>(m,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            duplicateArr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<duplicateArr.size();i++){
        reverse(duplicateArr[i].begin(),duplicateArr[i].end());
    }
    for(int i=0;i<duplicateArr.size();i++){
        for(int j=0;j<duplicateArr[0].size();j++){
            cout<<duplicateArr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>arr ={{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}};
    turnByNinety(arr);
    return 0;
}