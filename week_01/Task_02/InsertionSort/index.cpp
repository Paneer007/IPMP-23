#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector<int>Arr={19,17,16,82,9};
    InsertionSort(Arr);
    for(auto x: Arr){
        cout<<x<<" ";
    }
    return 0;
}