#include<bits/stdc++.h>
using namespace std;
vector<int>GenerateSquareNumber(int n){
    vector<int>Arr;
    for(int i=1;i*i<=n*n;i++){
        Arr.push_back(i*i);
    }
    return Arr;
}
int NoOfTriplets(vector<int>Arr, int n){
    int count =0;
    for(int i=0;i<n;i++){
        int a2= Arr[i];
        for (int j=i+1;j<n;j++){
            int b2= Arr[j];
            int c2 = a2+b2;
            if (c2>n*n){
                continue;
            }
            if(find(Arr.begin()+j,Arr.end(),c2)!=Arr.end()){
                count++;
            }
        }
    }
    cout<<"the number of pythagorean triplets are "<<count<<endl;
    return count;
}
int main(){
    int n=100;
    vector<int>Arr=GenerateSquareNumber(n);
    int count = NoOfTriplets(Arr,n);
    return 0;
}