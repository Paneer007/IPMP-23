#include<bits/stdc++.h>
using namespace std;
void randomizeArray(vector<int>&arr){
     srand (time(NULL));
    for(int i=arr.size()-1;i>=0;i--){
        int randIndex = rand()%(i+1);
        swap(arr[i],arr[randIndex]);
    }
}
int main(){
    vector<int>arr= {1, 2, 3, 4, 5, 6, 7, 8};
    randomizeArray(arr);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}