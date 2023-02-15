#include<bits/stdc++.h>
using namespace std;
//Minimum sum
void findMinSum(vector<int>arr){
    int n=arr.size();
    int diff =INT_MAX;
    sort(arr.begin(),arr.end());
    int l =0;
    int h = arr.size()-1;
    int lg = 0;
    int hg=0;
    while(l<h){
        if(abs(arr[l]+arr[h])<diff){
            lg=l;
            hg = h;
            diff= (abs(arr[l]+arr[h]));
            l++;
        }else{
            h--;
        }
    }
    cout<<lg<<" "<<hg<<" "<<diff;
}
int main(){
    vector<int> arr = {1,60,-10,70,-80,85};
    findMinSum(arr);
    return 0;
}