#include<bits/stdc++.h>
using namespace std;
pair<int,int>DiffNum(vector<int>Arr){
    int Xor_terms = Arr[0];
    pair<int,int>PairOfNum;
    for(int i=1;i<Arr.size();i++){
        Xor_terms=Xor_terms^Arr[i];
    }
    int rightmostSetBit= Xor_terms&~(Xor_terms-1);
    int term1=0;
    int term2=0;
    for(int i=0;i<Arr.size();i++){
        if(rightmostSetBit&Arr[i]){
            term1=term1^Arr[i];
        }else{
            term2 = term2^Arr[i];
        }
    }
    PairOfNum.first=term1;
    PairOfNum.second=term2;
    return PairOfNum;
}
int main(){
    vector<int>Arr={1,2,2,3,3,3,3,4,4,5};
    pair<int,int>DiffNumber = DiffNum(Arr);
    cout<<"the two different numbers are: "<<DiffNumber.first<<" "<<DiffNumber.second<<endl;
}