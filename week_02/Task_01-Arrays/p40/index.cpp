#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int>arr){
    int n = arr.size();
    int gmax = INT_MIN;
    int currmax = 0;
    for(int i=0;i<n;i++){
        currmax += arr[i];
        if(gmax < currmax)
            gmax = currmax;
        if (currmax<0)
            currmax=0;
    }
    return gmax;
}
int main(){
    vector<int>arr = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int max_sum = maxSubArraySum(arr);
    cout<<max_sum;
    return 0;
}