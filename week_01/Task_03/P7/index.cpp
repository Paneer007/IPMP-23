#include<bits/stdc++.h>
using namespace std;
vector<int>generateDigitArray(int x){
    stack<int>TempStack;
    vector<int>Arr;
    while(x){
        int rem = x%10;
        TempStack.push(rem);
        x=x/10;
    }
    while(!TempStack.empty()){
        Arr.push_back(TempStack.top());
        TempStack.pop();
    }
    return Arr;
}
int StitchArray(vector<int>DigitArray){
    int number =0;
    for(auto x:DigitArray){
        number=number*10+x;
    }
    return number;
}
int GenerateNextPermutation(vector<int>DigitArray){
    int n=DigitArray.size();
    int i;
    for(i=1;i<n;i++){
        if(DigitArray[i-1]>DigitArray[i]){
            break;
        }
    }
    int Digit = DigitArray[i];
    int index;
    int minGreaterDigit = INT_MAX;
    for(int j=i+1;j<n;j++){
        if(DigitArray[j]>Digit){
            if(DigitArray[j]<minGreaterDigit){
                minGreaterDigit=DigitArray[j];
                index=j;
            }
        }
    }
    swap(DigitArray[i],DigitArray[index]);
    sort(DigitArray.begin()+i+1,DigitArray.end());
    int number = StitchArray(DigitArray);
    return number;
}
int main(){
    int x=123456;
    vector<int>DigitArray = generateDigitArray(x);
    x =GenerateNextPermutation(DigitArray);
    cout<<"the next permutation is: "<<x<<endl;
    return 0;
}