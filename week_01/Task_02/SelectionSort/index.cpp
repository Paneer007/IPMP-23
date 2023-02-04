#include<bits/stdc++.h>
using namespace std;

// Below is the code used for the implementation of Selection Sort
// Time Complexity: O(n^2)

void SelectionSort(vector<int>&Arr){
    int n = Arr.size();
    int i=0;
    for(int i=0;i<n-2;i++){ // We iterate through the array from index i =0 till second last element (last element will be sorted)
        int min = i;        // We keep track of index of min element so far
        for(int j=i+1;j<n;j++){  // Iterating from the next element till end of array
            if(Arr[i]>Arr[j]){
                min =j; //Updating Min index
            }
        }
        swap(Arr[i],Arr[min]); // Swaping the current element with the next min element
    }
}
int main(){
    vector<int>Arr={89,423,192,2913,513,113};
    cout<<"\n Array before Sorting: ";
    for (auto x: Arr){
        cout<<x<<" ";
    }
    SelectionSort(Arr);
    cout<<"\n Array after Sorting: ";
    for (auto x: Arr){
        cout<<x<<" ";
    }
}