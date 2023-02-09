#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>&Arr, int l, int m , int r){
    int i,j,k;
    vector<int>Copy;
    i=l, j=m+1 ,k=0;
    while(i<=m && j<=r){
        if(Arr[i]<Arr[j]){
            Copy.push_back(Arr[i]);
            i++;
        }else{
            Copy.push_back(Arr[j]);
            j++;
        }
    }
    while(i<=m){
        Copy.push_back(Arr[i]);
        i++;
    }
    while(j<=r){
        Copy.push_back(Arr[j]);
        j++;
    }
    for(int i=0;i<Copy.size();i++){
        Arr[l]=Copy[i];
        cout<<Arr[l]<<endl;
        l++;
    }
}
void MergeSort(vector<int>&Arr, int l, int r){
    if(l<r){
        int m = l+ (r-l)/2;
        MergeSort(Arr,l,m);
        MergeSort(Arr,m+1,r);
        Merge(Arr,l,m,r);
    }
}
int main(){
    vector<int>Arr ={39,48,17,19,43,11,14};
    int n = Arr.size();
    MergeSort(Arr,0,n-1);
    for(auto x: Arr){
        cout<<x<<" ";
    }
    return 0;
}