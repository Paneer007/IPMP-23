#include<bits/stdc++.h>
using namespace std;
void Rotate(vector<int>&arr, int d){
    int p=1;
    int n = arr.size();
    while(p<=d){
        int last = arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=last;
        p++;
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    int d =2;
    Rotate(arr,d);
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}