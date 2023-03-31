#include<bits/stdc++.h>
using namespace std;
void MajorityElement(vector<int>Arr){
    int count=1;
    int currElem = Arr[0];
    for(int i=1;i<Arr.size();i++){
        if (Arr[i]==currElem){
            count++;
        }else{
            count--;
            if (count==0){
                count=1;
                currElem=Arr[i];
            }
        }
    }
    cout<<"The Major element is : "<<currElem<<endl;
}
int main(){
    vector<int>Arr={1,1,2,3,3,4,4,4,5};
    MajorityElement(Arr);
    return 0;
}