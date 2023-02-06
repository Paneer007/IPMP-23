#include<bits/stdc++.h>
using namespace std;
void ThreeSum(vector<int>Arr, int n){
    sort(Arr.begin(),Arr.end());
    for (int i=0;i<n;i++){
        int val = Arr[i];
        int target = n-val;
        int start = i+1;
        int end = Arr.size()-1;
        while(start <end){
            int currSum =Arr[start]+Arr[end];
            if(currSum==target){
                cout<<"the required triplets are: "<<Arr[i]<<" "<<Arr[start]<<" "<<Arr[end]<<endl;
                return;
            }else if (currSum > target){
                end--;
            }else{
                start++;
            }
        }
    }
    cout<<"no such sum exists"<<endl;
}
int main(){
    vector<int>Arr={3,4,1,2,5,7,9,11,13};
    int target = 17;
    ThreeSum(Arr,target);
}