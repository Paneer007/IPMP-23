#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    return ((n & (~(n - 1))) == n);
}
int main(){
    isPowerOfTwo(16)?cout<<"Yes":cout<<"No";
    isPowerOfTwo(17)?cout<<"Yes":cout<<"No";
    return 0;
}