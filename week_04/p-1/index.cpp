#include<bits/stdc++.h>
using namespace std;
void BinarySearch(vector<int>Arr,int target){
    int l = 0;
    int r = Arr.size()-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if (Arr[mid]==target){
            cout<<"The index of the element is : "<<mid<<endl;
            return;
        }else if (Arr[mid]> target){
            r = mid;
        }else{
            l=mid+1;
        }
    }
}
int main(){
    vector<int>Arr={1,2,4,5,6,7,8,9,10};
    int target = 4;
    BinarySearch(Arr,target);
    return 0;
}