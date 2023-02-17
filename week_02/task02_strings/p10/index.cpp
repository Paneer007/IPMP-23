#include<bits/stdc++.h>
using namespace std;
void firstNonRepeatingChar(string s){
    unordered_map<char,int>mp;
    for(auto x: s){
        if (mp.find(x)!= mp.end()){
            mp[x]++;
        }else{
            mp[x]=1;
        }
    }
    for(auto x:s){
        if(mp[x]==1){
            cout<<"the first non repeating character : "<<x;
            return;
        }
    }
    cout<<"no unique character"<<endl;
    return;
}
int main(){
    string s ="somesonglyrics";
    firstNonRepeatingChar(s);
    return 0;
}