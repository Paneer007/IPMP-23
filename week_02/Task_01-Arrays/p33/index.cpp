#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair getMinMax(vector<int>arr){
    int n = arr.size();
    Pair minmax;
    int i=0;
    if(n%2==0){
        minmax.max = max(arr[0],arr[1]);
        minmax.min= min(arr[0],arr[1]);
        i=2;
    }else{
        minmax.max = arr[0];
        minmax.min= arr[0];
        i=1;
    }
    while(i<n-1){
        minmax.max=  max(minmax.max,max(arr[i],arr[i+1]));
        minmax.min=  min(minmax.min,min(arr[i],arr[i+1]));
        i+=2;
    }
    return minmax;

}
int main(){
    vector<int>arr={ 1000, 11, 445,1, 330, 3000 };
    int arr_size = arr.size();
    Pair minmax = getMinMax(arr);
    cout<<minmax.max<<" "<<minmax.min<<endl;

}