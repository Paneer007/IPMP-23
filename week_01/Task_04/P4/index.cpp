#include<bits/stdc++.h>
using namespace std;
void reverseWordsOfString(string s){
    int stopper = 0;
    int end = s.size()-1;
    int start=0;
    while(stopper<=end){
        if(s[stopper]==' '){
            reverse(s.begin()+start, s.begin()+stopper);
            stopper++;
            start = stopper;
        }else{
            stopper++;
        }
    }
     reverse(s.begin()+start, s.begin()+stopper);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
int main(){
    string s="this is solved under ipmp mentorship";
    reverseWordsOfString(s);
}