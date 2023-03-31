#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    char val;
    ListNode *next;
    ListNode(char x) : val(x), next(NULL) {}
};
ListNode* insert(char data, ListNode* head){
    ListNode* Temp = new ListNode(data);
    Temp->next = head;
    head = Temp;
    return head;
}
void PrintLL(ListNode* head){
    auto temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" "<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

bool isVowel(char a){
    switch(a){
        case 'a':
            return true;
        case 'e':
            return true;
        case 'i':
            return true;
        case 'o':
            return true;
        case 'u':
            return true;
    }
    return false;
}
ListNode* EvenAndOddList(ListNode* head){
    if (!head || !(head->next)){
        return head;
    }
    ListNode* vowelD = new ListNode(0);
    ListNode* consonantD = new ListNode(0);

    ListNode *vowel= vowelD, *consonant = consonantD;
    
    ListNode* curr = head;
    while( curr ){
        if (isVowel(curr->val)){

            //TODO; fix the ordering

            //zero->next = curr;
            //zero= zero->next;
            vowel->next = curr;
            vowel = vowel->next;
        }else{
            // one->next = curr;
            // one=one->next;
            consonant->next = curr;
            consonant= consonant->next;
        }
        curr  = curr->next;
    }
    consonant->next=vowelD->next;

    head = consonantD->next;
    return head;

}
int main(){
     ListNode* head= new ListNode('a');  
    head=insert('q',head);
    head=insert('w',head);
    head=insert('e',head);
    head=insert('r',head);
    head=insert('t',head);
    head=insert('y',head);
    head=insert('u',head);
    head=insert('i',head);
    head= EvenAndOddList(head);
    PrintLL(head);
    return 0;
}