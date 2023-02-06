#include<bits/stdc++.h>
using namespace std;
//Finding missing number in an array of 1->n
//Implemented with the help of xor
//This approach works well with unsorted array
int GetMissingNumber(vector<int>Arr){
    int XorOfArr=1;
    int XorOfIndex=1;
    for(auto x : Arr){
        if (x!=1){
            XorOfArr=XorOfArr^x;
        }
    }
    for(int i=2;i<=Arr.size()+1;i++){
        XorOfIndex=XorOfIndex^i;
    }
    int missingTerm = XorOfArr^XorOfIndex;
    return missingTerm;
}
int main(){
    vector<int>Arr={1,2,3,4,5,7,8,9,10};
    int MissingTerm = GetMissingNumber(Arr);
    cout<<"The missing term: "<<MissingTerm<<endl;
    return 0;
}