#include<bits/stdc++.h>
using namespace std;
//coin change problem

void coinChange(int sum, vector<int>coins){
    vector<int>table(sum+1, 0);
    coins[0]=1;

    int n = coins.size();

    for(int i = 0; i < n; i++){
        for(int j = coins[i];j<= sum;i++){
            table[j]+= table[j-coins[i]];
        }
    }
    
}

int main(){
    vector<int>coins = {1,2,3};
    int sum = 4;
    coinChange(sum, coins);
    return 0;
}