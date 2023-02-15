#include<bits/stdc++.h>
using namespace std;
//Maximum number of ones in a 2d row wise matrix
int first(vector<int> arr,int low, int high){
    while (high>=low){
        int mid  = low + (high-low)/2;
        if ((mid ==0 || arr[mid-1]==0)&&arr[mid]==1){
            return mid;
        }else if (arr[mid]==0){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}
int rowWithMax1s(vector<vector<int>>mat){
    int max_row_index = 0 ,max=-1;
    int i, index;
    int R = mat.size();
    int C = mat[0].size(); 
    for(i=0;i<R;i++){
        index = first (mat[i],0,C-1);
        if(index != -1 && C-index >max){
            max= C -index;
            max_row_index = i;
        }
    }
    return max_row_index;
}
int main(){
    vector<vector<int>>mat={ {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
    cout<<rowWithMax1s(mat)<<endl;
    return 0;
}