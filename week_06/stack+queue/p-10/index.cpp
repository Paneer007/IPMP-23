#include<bits/stdc++.h>
using namespace std;
void printNGE(vector<int>arr){
    int n = arr.size();
    stack<int>s;
    s.push(arr[0]);
    for(auto x: arr){
        if(s.empty()){
            s.push(x);
            continue;
        }
        while(s.top()<x){
            cout<<s.top()<<" --> "<<x<<endl;
            s.pop();
        }
        s.push(x);
    }
    while(!s.empty()){
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}
int main(){  
    vector<int>arr ={11,13,21,3};
    printNGE(arr);
    return 0;
}