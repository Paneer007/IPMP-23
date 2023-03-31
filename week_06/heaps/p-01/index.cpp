#include <bits/stdc++.h>
using namespace std;
void KSortedArray(vector<int> arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto x : arr)
    {
        pq.push(x);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main()
{
    vector<int> arr = {12, 9, 10, 13, 15, 7, 1};
    int k = 5;
    KSortedArray(arr, k);
    return 0;
}