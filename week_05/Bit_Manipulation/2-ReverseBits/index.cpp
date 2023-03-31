#include<bits/stdc++.h>
using namespace std;
int reverseBits(int n){
     int a=0;
        for(int i=0;i<32;i++){
            int z= n>>i;
            a=a<<1;
            a|= z&1;
        }
        return a;
}
int main(){
    cout<<reverseBits(1)<<endl;
    return 0;
}