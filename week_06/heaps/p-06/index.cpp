#include<bits/stdc++.h>
using namespace std;
void mergeSortedArray(vector<vector<int>>arr){
    priority_queue<int,vector<int>,greater<int>>que;
    for(auto x: arr){
        for(auto y: x){
            que.push(y);
        }
    }
    vector<int>res;
    while(!que.empty()){
        res.push_back(que.top());
        que.pop();
    }
    for(auto x: res){
        cout<<x<<endl;
    }
}
int main(){
    vector<vector<int>>arr= { {1, 3, 5, 7}, {2, 4, 6, 8}, {0, 9, 10, 11}};
    mergeSortedArray(arr);
}