#include<bits/stdc++.h>
using namespace std;
void rearrange(vector<int>&arr){
    int j=-1;
    int n= arr.size();
    for(int i=0;i<n;i++ ){
        if(arr[i]%2==0){
            swap(arr[i],arr[++j]);
        }
    }
}
int main(){
    vector<int>arr={ 0, 1, 0, 1, 1,0, 1 };
    rearrange(arr);
    for(auto x: arr){
        cout<<x<<" ";
    }
}