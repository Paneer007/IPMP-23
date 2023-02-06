#include<bits/stdc++.h>
using namespace std;
void printDuplicates(string s){
    unordered_map<char,int>char_map;
    for(char c:s){
        char_map[c]++;
    }
    for(auto it : char_map){
        if(it.second>1){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

}
int main(){
    string s="somerandomstrings";
    printDuplicates(s);
    return 0;
}