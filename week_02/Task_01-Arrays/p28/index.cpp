#include<bits/stdc++.h>
using namespace std;
void rearrange(vector<int>&arr){
    int n= arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            j++;
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    vector<int>arr={12,10,9,45,2,10,10,45};
    rearrange(arr);
    for(auto x: arr){
        cout<<x<<" ";
    }
}