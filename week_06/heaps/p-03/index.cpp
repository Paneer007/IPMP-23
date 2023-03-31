#include <bits/stdc++.h>
using namespace std;
vector<int> merge_machine(vector<vector<int>> nums)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto x : nums)
    {
        for (auto y : x)
        {
            pq.push(y);
        }
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return ans;
}
int main()
{
    vector<int> M1 = {30, 40, 50};
    vector<int> M2 = {35, 45};
    vector<int> M3 = {10, 60, 70, 80, 100};
    vector<vector<int>> nums;
    nums.push_back(M1);
    nums.push_back(M2);
    nums.push_back(M3);
    auto merged = merge_machine(nums);
    return 0;
}