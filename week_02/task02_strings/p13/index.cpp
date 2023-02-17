#include<bits/stdc++.h>
using namespace std;
void CheckIfAnagram(string s1 ,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"They are anagrams"<<endl;
    }else{
        cout<<"They are not anagrams"<<endl;
    }
}
int main(){
    string s1="helloWorlds";
    string s2 ="Worldhello";
    CheckIfAnagram(s1,s2);
}