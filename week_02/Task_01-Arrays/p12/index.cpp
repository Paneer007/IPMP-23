#include<bits/stdc++.h>
using namespace std;

//Two Repeating Elements
void printRepeatingElem(vector<int>arr, int size){
    int Xor = arr[0];
    int set_bit_no;
    int i;
    int n = size-2;
    int x=0,y=0;
    for(i=1;i<size;i++){
        Xor ^=arr[i];
    }
    for(i=1;i<=n;i++){
        Xor ^=i;
    }
    set_bit_no= Xor&~(Xor-1);
    for(i =0;i<size;i++){
        if(arr[i]&set_bit_no)
            x=x^arr[i];
        else
            y = y^arr[i];
    }
    for( i =1;i<=n;i++){
        if (i & set_bit_no)
            x=x^i;
        else
            y=y^i;
    }
        cout << "Repeating elements are " << y << " " << x;

}
int main(){
    vector<int>arr = {4,2,4,5,2,3,1};
    int n = arr.size();
    printRepeatingElem(arr,n);
    return 0;
}