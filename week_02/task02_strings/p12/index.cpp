#include<bits/stdc++.h>
using namespace std;
void removeChar(string s1, string s2){
    vector<int>arr(26,0);
    int curr =0;
    for(int i=0;i<s2.size();i++){
        arr[s2[i]-'a']=-1;
    }
    for(int i=0;i<s1.size();i++){
        if (arr[s1[i] - 'a'] != -1) {  
            s1[curr] = s1[i];       
            curr++;               
        }
    }
    cout<<s1<<endl;
}
int main(){
    string s1= "sanjaikumarmani";
    string s2 = "world";
    removeChar(s1,s2);
}