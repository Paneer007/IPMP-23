#include<bits/stdc++.h>
using namespace std;

//FourSum
void fourSum(int X, vector<int>arr,map<int,pair<int,int>> Map,int n){
    vector<int> temp(n,0);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int curr_sum = arr[i]+arr[j];
            if(Map.find(X-curr_sum)!= Map.end()){
                pair<int,int>p=Map[X-curr_sum];
                if (p.first != i && p.second != i
                    && p.first != j && p.second != j
                    && temp[p.first] == 0
                    && temp[p.second] == 0 && temp[i] == 0
                    && temp[j] == 0)
                {
 
                    // Print the output
                    cout << arr[i] << "," << arr[j] <<
                      "," << arr[p.first] << "," << arr[p.second];
                    temp[p.second] = 1;
                    temp[i] = 1;
                    temp[j] = 1;
                    break;
                }
            }
        }
    }
}
map<int,pair<int,int>> twoSum(vector<int>arr,int n){
    map<int,pair<int,int>> Map;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            Map[arr[i]+arr[j]].first=i;
            Map[arr[i]+arr[j]].second=j;
        }
    }
    return Map;
}
int main(){
    //vector<int> array ={10,2,3,4,5,9,7,8};
    vector<int> arr = {10,20,30,40,1,2};
    int n = arr.size();
    int X =91;
    map<int, pair<int,int>>Map = twoSum(arr,n);
    fourSum(X,arr,Map,n);
    return 0;
}