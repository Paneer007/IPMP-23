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
bool CheckIfNine(vector<int>DigitArray){
    int size=DigitArray.size();
    int count=0;
    for(int i=0;i<size;i++){
        if(DigitArray[i]==9){
            count++;
        }
    }
    if(count==size){
        return true;
    }else{
        return false;
    }
}
int StitchArray(vector<int>DigitArray){
    int number =0;
    for(auto x:DigitArray){
        number=number*10+x;
    }
    return number;
}
int GenerateThePalindrome(vector<int>DigitArray){
    int n = DigitArray.size();
    int mid = n/2;
    bool leftsmaller = false;
    int i = mid -1;
    int j = n%2==0?mid:mid+1;
    while(i>=0 && j<n && DigitArray[i]==DigitArray[j]){
        i--;
        j++;
    }
    if(i<0 || DigitArray[i]<DigitArray[j]){
        leftsmaller=true;
    }
    while(i>=0){
        DigitArray[j]=DigitArray[i];
        j++;
        i--;
    }
    if(leftsmaller==true){
        int carry =1;
        i = mid -1;
        if (n % 2 == 1){
            DigitArray[mid] += carry;
            carry = DigitArray[mid] / 10;
            DigitArray[mid] %= 10;
            j = mid + 1;
        }else{
            j = mid;
        }
        while (i >= 0){
            DigitArray[i] += carry;
            carry = DigitArray[i] / 10;
            DigitArray[i] %= 10;
            DigitArray[j++] = DigitArray[i--];
        }
    }
    int Number = StitchArray(DigitArray);
    return Number;
}
int GenerateNextPalindrome(int x){
    int Palindrome=0;
    vector<int>DigitArray= generateDigitArray(x);
    if (CheckIfNine(DigitArray)){
        Palindrome=x+2;
    }else{
        Palindrome = GenerateThePalindrome(DigitArray);
    }
    return Palindrome;
}
int main(){
    int x;
    cin>>x;
    int NextPal=GenerateNextPalindrome(x);
    cout<<NextPal<<endl;
    return 0;
}