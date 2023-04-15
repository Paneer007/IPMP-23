#include<bits/stdc++.h>
using namespace std;

void findMinInsertionsDP(string str){
    int n = str.size();
    vector<vector<int>>table(n,vector<int>(n,0));
    for(int gap = 1; gap<n;gap++){
        for(int l =0 , h = gap ; h<n ; ++l,++h){
            table[l][h] = (str[l] == str[h])? table[l + 1][h - 1] :
                        (min(table[l][h - 1],
                             table[l + 1][h]) + 1);
        }
    }

    cout<< table[0][n-1];
}

int main(){
    string str= "geeks";
    findMinInsertionsDP(str);
    return 0;
}