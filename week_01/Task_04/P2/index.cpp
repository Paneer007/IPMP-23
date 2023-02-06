#include<bits/stdc++.h>
using namespace std;
vector<string>res;
void permutate(string &s,int l, int r){
    if (l==r){
        res.push_back(s);
    }else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[r]);
            permutate(s,l+1,r);
            swap(s[l],s[r]);
        }
    }
}
int main(){
    string s ="combinate";
    int n = s.size()-1;
    permutate(s,0,n);
    cout<<res.size()<<endl;
    return 0;
}