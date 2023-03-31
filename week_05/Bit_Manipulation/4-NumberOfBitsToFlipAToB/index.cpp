#include<bits/stdc++.h>
using namespace std;
unsigned int countSetBits(int n)
{
   unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
void deferBits(int a , int b){
    cout<<countSetBits(a^b)<<endl;
}
int main(){
    int a = 10;
    int b = 20;
   deferBits(a,b);
    return 0;
}