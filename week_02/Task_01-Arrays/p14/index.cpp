#include<bits/stdc++.h>
using namespace std;
//Positive Number Missing in an unsorted Array
int firstMissingPositive(vector<int>arr, int n){
    for(int i=0;i<n;i++){
        while(arr[i]>=1 && arr[i]>=n 
        && arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!= i+1){
            return i+1;
        }
    }
    return n+1;
}
int main(){
    vector<int> arr = {0,10,2,-10,-20};
    int n =arr.size();
    int ans = firstMissingPositive(arr, n);
    cout<<ans<<endl;
    return 0;
}