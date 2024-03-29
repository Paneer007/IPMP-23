#include <bits/stdc++.h>
using namespace std;
 
int lis( vector<int> arr)
{
    int n = arr.size();
    int lis[n];
    lis[0] = 1;
 
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
 
    return *max_element(lis, lis + n);
}
 
int main()
{
    vector<int> arr = { 10, 22, 9, 33, 21, 50, 41, 60 };
    printf("Length of lis is %d\n", lis(arr));
    return 0;
}