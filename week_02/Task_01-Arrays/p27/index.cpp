#include<bits/stdc++.h>
using namespace std;
//Sort By frequency
bool compare(pair<int,pair<int,int>> p,pair<int,pair<int,int>> p1){
    if (p.second.second != p1.second.second)
        return (p.second.second > p1.second.second);
    else
        return (p.second.first < p1.second.first);
}
void sortByFrequency(vector<int>arr){
    int n = arr.size();
    unordered_map<int,pair<int,int>> hash;
    for(int i=0;i<n;i++){
        if (hash.find(arr[i]) != hash.end())
            hash[arr[i]].second++;
        else
            hash[arr[i]] = make_pair(i, 1);
    }
    auto it  = hash.begin();
    vector<pair<int, pair<int, int> > > b;
    for (it; it != hash.end(); ++it)
        b.push_back(make_pair(it->first, it->second));
 
    sort(b.begin(), b.end(), compare);
 
    // Printing the Sorted sequence
    for (int i = 0; i < b.size(); i++) {
        int count = b[i].second.second;
        while (count--)
            cout << b[i].first << " ";
    }

}
int main(){
    vector<int>arr ={2,5,2,6,-1,99,5,8,8,8};
    sortByFrequency(arr);
    return 0;
}