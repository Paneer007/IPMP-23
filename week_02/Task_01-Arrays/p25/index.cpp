#include<bits/stdc++.h>
using namespace std;
//product of array except itself
void productOfArray(vector<int>arr){

    vector<int>prod(arr.size(),1);
    int temp=1;
    for(int i=0;i<arr.size();i++){
        prod[i]*=temp;
        temp*=arr[i];
    }
    temp=1;
    for(int i=arr.size()-1;i>=0;i--){
        prod[i]*=temp;
        temp*=arr[i];
    }
    for(auto x: prod){
     cout<<x<<" ";
    }
}
int main(){
    vector<int>arr = {10,3,5,6,2};
    productOfArray(arr);
    return 0;
}