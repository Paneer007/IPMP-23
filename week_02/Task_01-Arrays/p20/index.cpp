#include<bits/stdc++.h>
using namespace std;
//Duplicates in O(n) time
void findDuplicates(vector<int>arr){
    unordered_map<int,int>map;
    for(auto x: arr){
        if(map.find(x)!=map.end()){
            cout<<x<<endl;
        }else{
            map[x]=1;
        }
    }
}
int main(){
    vector<int>Arr={1,2,3,-1,1,2};
    findDuplicates(Arr);
    return 0;
}