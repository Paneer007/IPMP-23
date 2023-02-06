#include<bits/stdc++.h>
using namespace std;
//Find the element which occurs odd no of times
int GetRecurrence(vector<int>Arr){
    int Val = 0;
    for(int x : Arr){
        Val = Val^x;
    }
    return Val;
}
int main(){
    vector<int>Arr ={2,3,4,5,2,3,3,4,5,5,5};
    int OddTerm=GetRecurrence(Arr);
    cout<<"The Odd Term: "<<OddTerm<<endl;
    return 0; 
}