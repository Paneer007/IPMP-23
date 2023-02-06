#include<bits/stdc++.h>
using namespace std;
// Union and Intersection of two sorted arrays
vector<int> UnionOfArray(vector<int>Set1,vector<int>Set2){
    int i=0;
    int j=0;
    int m = Set1.size();
    int n = Set2.size();
    vector<int>solution;
    while( i<m && j<n){
        while(i+1<m&&Set1[i+1]==Set1[i]){
            i++;
        }
        while(j+1<n&&Set1[j+1]==Set1[j]){
            j++;
        }
        if(Set1[i]<Set2[j]){
            solution.push_back(Set1[i++]);
        }
        if(Set2[j]<Set1[i]){
            solution.push_back(Set2[j++]);
        }else{
            solution.push_back(Set1[i]);
            i++;
            j++;
        }
    }
    while(i<m){
        while(i+1<m&&Set1[i+1]==Set1[i]){
            i++;
        }
        solution.push_back(Set1[i++]);
    }
    while(j<n){
        while(j+1<n&&Set1[j+1]==Set1[j]){
            j++;
        }
        solution.push_back(Set2[j++]);
    }
    return solution;

}
vector<int>IntersectionOfArray(vector<int>Set1,vector<int>Set2){
    int i=0;
    int j=0;
    int m = Set1.size();
    int n = Set2.size();
    vector<int>solution;
    while( i<m && j<n){
        while(i+1<m&&Set1[i+1]==Set1[i]){
            i++;
        }
        while(j+1<n&&Set1[j+1]==Set1[j]){
            j++;
        }
        
        if(Set1[i]<Set2[j]){
            i++;
        }
        if(Set2[j]<Set1[i]){
            j++;
        }
        if(Set2[j]==Set1[i])  {
            solution.push_back(Set1[i]);
            i++;
            j++;
        }
    }
    return solution;
}
int main(){
    vector<int>Set1={1,1,2,3,4,4,5,6};
    vector<int>Set2={3,3,3,4,4,5,6,7,8,9,10};
    vector<int>UnionSet =UnionOfArray(Set1,Set2);
    vector<int>IntersectionSet = IntersectionOfArray(Set1,Set2);
    cout<<"\nUnion Of Two Sorted Arrays"<<endl; 
    for(int x:UnionSet){
        cout<<x<<" ";
    }
    cout<<"\nIntersection of Two Sorted Arrays"<<endl;
    for(int x:IntersectionSet){
        cout<<x<<" ";
    }
    return 0;   
}