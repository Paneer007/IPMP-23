#include<bits/stdc++.h>
using namespace std;
//Check if subarray has a zero sum
void subArrExists(vector<int>arr){
    unordered_map<int,int>Map;
    for(auto x: arr){
        if(Map.find(-1*x)!= Map.end()){
            cout<<"It exists: ";
            cout<<x<<" "<<-1*x<<endl;
            return;
        }else{
            Map[x]=1;
        }
    }
}
int main(){
    vector<int>arr ={-3,-2,3,1,6};
    subArrExists(arr);

    return 0;
}