#include<bits/stdc++.h>
using namespace std;
bool checkIfNumTerm(char term){
    if((term -'0'>= 0) && (term -'0' <=9)){
        return true;
    }
    else{
        return false;
    }
}
void SegregateTerms(vector<char> arr){
    int n = arr.size();
    int j =-1;
    for(int i=0;i<n;i++){
        if(!checkIfNumTerm(arr[i])){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    for(auto x: arr){
        cout<<x<<" ";
    }
}
int main(){
    vector<char>arr = {'a','1','b','2','c','3','d','4'};
    SegregateTerms(arr);
    return 0;
}