#include<bits/stdc++.h>
using namespace std;
class fakeStack{
    queue<int>q1;
    queue<int>q2;
    public:
        void push(int x){
            q1.push(x);
        }
        void pop(){
            if(q2.empty()){
                while(!q1.empty()){
                    q2.push(q1.front());
                    q1.pop();
                }
            }
            q2.pop();
        }
};
int main(){

    return 0;
}