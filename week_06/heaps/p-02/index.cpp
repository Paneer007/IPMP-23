#include <bits/stdc++.h>
using namespace std;
class Compare
{
public:
    bool operator()(pair<int, string> a, pair<int, string> b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};
void topKFrequentWords(vector<string> words, int k)
{
    unordered_map<string, int> map;
    for (auto x : words)
    {
        map[x]++;
    }
    priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> pq;
    for (auto p : map)
    {
        pq.push({p.second, p.first});
    }
    vector<string> ans;
    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<string> words = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    int k = 4;
    topKFrequentWords(words, k);
    return 0;
}