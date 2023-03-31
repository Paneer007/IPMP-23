#include<bits/stdc++.h>
using namespace std;
class MinStack{
    public:
        stack<pair<int,int>>s;
        void push(int element){
            int new_min= s.empty()? element: min(element,s.top().second);
            s.push({element,new_min});
        }
        int pop(){
            int popped=INT_MIN;
            if (!s.empty()){
                popped= s.top().first;
                s.pop();
            }
            return popped;
        }
        int minimum(){
            int min_elem = s.top().second;
            return min_elem;
        }
};
int main(){
    MinStack s;
    // Function calls
    s.push(-1);
    s.push(10);
    s.push(-4);
    s.push(0);
    cout << s.minimum() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.minimum();
    return 0;
}