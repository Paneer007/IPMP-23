#include<bits/stdc++.h>
using namespace std;
//Find Maximum difference between two elements such that the larger element appears after
//the smaller element in array
int maxDiff(vector<int>arr){
    int n = arr.size();
    if(n>1){
        int max_diff = arr[1]-arr[0];
        int min_element = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-min_element >max_diff){
                max_diff=arr[i]-min_element;
                
            }
            if(arr[i]<min_element){
                min_element=arr[i];
            }
        }
        return max_diff;
    }
    return -1;
}
int main(){
    vector<int>nums={1,2,90,10,110};
    int diff = maxDiff(nums);
    cout<<"the maximum difference is "<<diff<<endl;
    return 0;
}