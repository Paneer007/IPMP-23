#include<bits/stdc++.h>
using namespace std;
bool isValid(int i, int j,int m,int n)
{
    if (i < 0 || i >= m
        || j >= n || j < 0)
        return false;
    return true;
}
void diagonalOrder(vector<vector<int>>arr){
    int R = arr.size();
    int C = arr[0].size();
    for(int k=0;k<R;k++){
        cout<<arr[k][0]<<" ";
        int i=k-1;
        int j =1;
        while(isValid(i,j,R,C)){
            cout<<arr[i][j]<<" ";
            i--;
            j++;
        }
        cout<<endl;
    }
    for (int k = 1; k < C; k++)
    {
        cout << arr[R - 1][k] << " ";
        int i = R - 2;
        int j = k + 1;
        while (isValid(i, j,R,C))
        {
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int>> arr ={
        { 1, 2, 3, 4 },    
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 16 },
        { 17, 18, 19, 20 },
    };
    diagonalOrder(arr);
    return 0;
}