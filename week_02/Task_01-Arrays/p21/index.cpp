#include<bits/stdc++.h>
using namespace std;
void partitionSum(vector<int>nums){
    int sumOfNums =0;
    for(auto x: nums){
        sumOfNums+=x;
    }
    int leftSum=0;
    sumOfNums-=nums[0];
    for(int i=1;i<nums.size()-1;i++){
        cout<<leftSum<<" "<<sumOfNums<<endl;
        leftSum+=nums[i-1];
        sumOfNums-=nums[i];
        if(leftSum==sumOfNums){
            cout<<"the partition index : "<<i<<endl;
            return;
        }
    }
}
int main(){
    vector<int>nums = {2,3,4,1,4,5};
    partitionSum(nums);
}