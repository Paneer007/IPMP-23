#include<bits/stdc++.h>
using namespace std;
int searchMatrix(vector<vector<int>>&mat, int target){
    int size = mat.size();
    if (size==0){
        return -1;
    }
    int smallest = mat[0][0];
    int largest = mat[size-1][size-1];
    if(target<smallest || target>largest){
        return -1;
    }
    int i=0,j=size-1;

    while(i<size && j>=0){
        if(mat[i][j] ==target){
             cout << "Element found at " << i << ", " << j;
            return 1;
        }
        if (mat[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    cout << "n Element not found";
    return 0;


}
int main(){
    vector<vector<int>> mat = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    int target = 29;
    searchMatrix(mat,target);
    return 0;
}