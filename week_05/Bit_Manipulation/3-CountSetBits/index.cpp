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
int main(){
    cout<<countSetBits(10)<<endl;
    return 0;
}