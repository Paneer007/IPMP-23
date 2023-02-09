#include<bits/stdc++.h>
using namespace std;
//TODO: fix this
int partition(vector<int>& arr, int low, int high){
    int pivot=arr[low];
    int lastmin,current;
    for (lastmin=low,current=low+1;current<=high;current++)
    {
        if (arr[current]<pivot) swap(arr[++lastmin],arr[current]);
    }
    swap(arr[low],arr[lastmin]);
    return lastmin;
}
int Partition(vector<int>&arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void QuickSort(vector<int>&arr, int l , int r){
    if(l>=r){
        return;
    }
    int p = Partition(arr,l ,r);
    QuickSort(arr,l,p-1);
    QuickSort(arr,p+1,r);
}
int main(){
    vector<int>Arr = {19,218,38,192,48};
    QuickSort(Arr,0,Arr.size()-1);
    for(auto x : Arr){
        cout<<x<<" ";
    }
    return 0;
}