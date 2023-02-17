#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s){
    int res =0;
    for(int i=0;i<s.size();i++){
        res = res*10 + (s[i]-'0');
    }
    return res;
}
int main(){
    string s = "89789";
    int Num = myAtoi(s);
    cout<<"the number is : "<<Num<<endl;
    return 0;
}