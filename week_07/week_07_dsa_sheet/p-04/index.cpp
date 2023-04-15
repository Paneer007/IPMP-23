#include<bits/stdc++.h>
using namespace std;
// min number of jumps to reach the end

int minJumps(vector<int>arr){
    int n = arr.size();
    vector<int>jumps(n,0);
    int min;
    jumps[n-1]=0;

    for( int i = n-2; i>= 0;i--){
        if ( arr[i] == 0) {
            jumps[i]= INT_MAX;
        }

        else if ( arr[i] >= n-i-1){
            jumps[i]=1;
        }
        else{
            min = INT_MAX;
            for ( int j = i+1; j< n && j <= arr[i]+1;j++){
                if(min > jumps[j])
                    min = jumps[j];
            }

            if (min != INT_MAX){
                jumps[i]= min + 1;
            }
            else{
                jumps[i]= min;
            }
        }
    }

    cout<<jumps[0]<<endl;

    return jumps[0];

}

int main(){
    vector<int>arr={1,3,5,8,9,2,6,7,6,8,9};
    minJumps(arr);
    return 0;
}