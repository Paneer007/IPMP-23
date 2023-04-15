#include <bits/stdc++.h>
using namespace std;
void maxSumIS(vector<int> arr)
{
    int n = arr.size();
    int maxNum = 0;
    vector<int> msis = arr;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && msis[i] < msis[j] + arr[i]){
                    msis[i] = msis[j] + arr[i];
                    maxNum = max(maxNum, msis[i]);
                }
    cout<<maxNum<<endl;
}
int main()
{
    vector<int> arr = {1, 101, 2, 3, 100, 4, 5};
    maxSumIS(arr);
    return 0;
}