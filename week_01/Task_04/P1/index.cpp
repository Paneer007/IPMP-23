#include<bits/stdc++.h>
using namespace std;
string rs;
void ReverseString(string& s,int n,int i){
    if(i==n){
        return;
    }
    char temp = s[i];
    ReverseString(s,n,i+1);
    rs=rs+temp;
}
int main(){
    string s="Hello World";
    int n=s.size();
    ReverseString(s,n,0);
    cout<<"the reversed string: "<<rs<<endl;
    return 0;
}