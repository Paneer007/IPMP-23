#include<bits/stdc++.h>
using namespace std;
void streamedMed(vector<int>arr){
    priority_queue<int>q,s;
    for(auto x : arr){
        q.push(x);
        int temp = q.top();
        q.pop();
        q.push(-1*temp);
        if(q.size()>s.size()){
            temp = q.top();
            q.pop();
            s.push(-1*temp);
        }
         if (q.size() != s.size())
            cout << (double)s.top() << "\n";
        else
            cout << (double)((s.top() * 1.0
                              - q.top() * 1.0)
                             / 2)
                 << "\n";
    }
}
int main(){
    vector<int> A= { 5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4 };
    streamedMed(A);
    return 0;
}