#include<bits/stdc++.h>
using namespace std;
void rearrange(vector<int>&arr){
    int n = arr.size();
    int  i=-1;
    for(int j=0;j<n;j++){
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    int pos=i+1,neg=0;
    while (pos < n && neg < pos &&
                     arr[neg] < 0)
    {
        swap(arr[neg], arr[pos]);
        pos++;
        neg += 2;
    }
}
int main(){
    vector<int>arr ={-1,2,-3,4,5,6,-7,8,9};
    rearrange(arr);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}