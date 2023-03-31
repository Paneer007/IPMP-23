#include<bits/stdc++.h>
using namespace std;
int PivotedBinarySearch(vector<int>nums, int target){
    int low = 0;
    int high = nums.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if (nums[mid]>nums[high]) low = mid+1;
        else high = mid;
    }
    int rot = low;
    int n = nums.size();
    low =0;
    high = nums.size()-1;
    while(low<=high){
        int mid =low+ (high-low)/2;
        int realMid = (mid + rot)%n;
        if (nums[realMid]==target) return realMid;
        if (nums[realMid]<target) low = mid+1;
        else high = mid -1;
    }
    return -1;
}
int main(){
    vector<int>Arr={4,5,6,7,1,2,3};
    int target = Arr[0];

    PivotedBinarySearch(Arr,target);
}