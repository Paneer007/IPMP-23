#include<bits/stdc++.h>
using namespace std;
void TwoSum(vector<int>Arr, int target){
    unordered_map<int,bool> Map;
    for(int i=0;i<Arr.size();i++){
        if(Map.find(target-Arr[i])!= Map.end()){
            cout<<target-Arr[i]<<" "<<Arr[i]<<endl;
            return;
        }else{
            Map[Arr[i]]=true;
        }
    }
    cout<<"no such value exists"<<endl;
}
int main(){
    vector<int>Arr={1,3,4,5,6,2,8};
    int target=7;
    TwoSum(Arr,target);
    return 0;
}