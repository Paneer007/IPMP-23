#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    int maximum;
};
void insert(stack<node>& s2,int val){
    node other;
    other.data = val;
    if (s2.empty())
        other.maximum = val;
    else {
        node front = s2.top();
        other.maximum = max(val, front.maximum);
    }
    s2.push(other);
    return;
}
void Delete (stack<node>& s1, stack<node>& s2)
{
    if (s1.size())
        s1.pop();
    else {
        while (!s2.empty()) {
            node val = s2.top();
            insert(s1, val.data);
            s2.pop();
        }
        s1.pop();
    }
}
vector<int> slidingMaximum(vector<int>a, int b)
{
    int N = a.size();
    vector<int> ans;
    stack<node> s1, s2;
    for (int i = 0; i < b - 1; i++)
        insert(s2, a[i]);
  
    for (int i = 0; i <= N - b; i++) {
        if (i - 1 >= 0)
            Delete (s1, s2);
  
        insert(s2, a[i + b - 1]);
  
        ans.push_back(get_max(s1, s2));
    }
    return ans;
}
int get_max(stack<node>& s1, stack<node>& s2)
{
    int ans = -1;
    if (s1.size())
        ans = max(ans, s1.top().maximum);
    if (s2.size())
        ans = max(ans, s2.top().maximum);
    return ans;
}
int main(){
    vector<int>arr = {12,1,78,90,57,89,56};
    int K=3;
    vector<int> ans = slidingMaximum(arr, K);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}