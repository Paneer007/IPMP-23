#include<bits/stdc++.h>
using namespace std;
int strcmp(string s1, string s2){
    int i;
    for(int i=0; s1[i]&&s2[i];++i){
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
            continue;
        else
            break;
    }
    if (s1[i] == s2[i])
        return 0;
 
    if ((s1[i] | 32) < (s2[i] | 32))
        return -1;
    return 1;
}
int main(){

    return 0;
}