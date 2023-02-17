#include<bits/stdc++.h>
using namespace std;
void ReturnUpdatedArr(vector<vector<int>>arr){
    bool isRow = false;
    bool isCol = false;
    for(int i=0;i<arr[0].size();i++){
        if (arr[0][i]==1){
            isRow=true;
            break;
        }
    }

    for(int i=0;i<arr.size();i++){
        if (arr[i][0]==1){
            isCol=true;
            break;
        }
    }

    for(int i=1;i<arr.size();i++){
        for(int j=1;j<arr[0].size();j++){
            if(arr[i][j]==1){
                arr[i][0]=1;
                arr[0][j]=1;
            }
        }
    }

    for(int i=1;i<arr.size();i++){
        for(int j=1;j<arr[i].size();j++){
            if(arr[i][0] ==1 || arr[0][j]==1){
                arr[i][j]=1;

            }
        }
    }
   

    if(isRow){
        for(int i=0;i<arr[0].size();i++){
            arr[0][i]=1;
        }
    }

     if(isCol){
        for(int i=0;i<arr.size();i++){
            arr[i][0]=1;
        }
    }

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



}
int main(){
    vector<vector<int>>arr ={{1, 0, 0, 1},
           {0, 0, 1, 0},
          {0, 0, 0, 0}};
    ReturnUpdatedArr(arr);
    return 0;
}