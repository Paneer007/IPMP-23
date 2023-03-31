#include<bits/stdc++.h>
using namespace std;
void calculateSpan(vector<int>price){
    int n = price.size();
    stack<int>st;
    vector<int>s(n,0);
    st.push(0);
    s[0]=1;
    for(int i=1;i<n;i++){
        while (!st.empty() && price[st.top()] <= price[i])
            st.pop();
        s[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
    for(auto x: s){
        cout<<x<<" "<<endl;
    }

}
int main(){
    vector<int>price = {10,4,5,90,120,80};
    calculateSpan(price);
    return 0;
}