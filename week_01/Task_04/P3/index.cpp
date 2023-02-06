#include<bits/stdc++.h>
using namespace std;
int FirstUniqueCharacterIndex(string s){
    unordered_map<char,int> char_map;
    for(char x: s){
        if(char_map.find(x)==char_map.end()){
            char_map[x]=1;
        }else{
            char_map[x]++;
        }
    }
    for(int i=0;i<s.size();i++){
            if(char_map[s[i]]==1){
                return i;
            }
        }
        return -1;
}
int main(){
    string s ="nationalcollege";
    int CharIndex= FirstUniqueCharacterIndex(s);
    if(CharIndex!=-1){
        cout<<s[CharIndex]<<endl;
    }
    return 0;
}