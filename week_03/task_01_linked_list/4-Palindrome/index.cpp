#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* insert(int data, ListNode* head){
    ListNode* Temp = new ListNode(data);
    Temp->next = head;
    head = Temp;
    return head;
}
ListNode* reverseLL(ListNode* node){
    ListNode* prev=  NULL;
    ListNode* next = NULL;
    ListNode* curr = node;
    while(curr != NULL){
        next= curr->next;
        curr->next=  prev;
        prev= curr;
        curr=  next;
    }
    return prev;
}
void isPalindrome(ListNode* head){
    if(head == NULL || head->next == NULL){
        cout<<"It is a palindrome "<<endl;
        return;
    }
    ListNode*slow = head;
    ListNode*fast = head->next;
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = reverseLL(slow->next);
    slow = slow->next;
    while(slow !=NULL){
        if(head->val!=slow->val){
            cout<<"Not a palindrome"<<endl;
            return;
        }
        head = head->next;
        slow = slow->next;
    }
    cout<<"It is a palindrome "<<endl;
    return;
}
int main(){
    ListNode* head= new ListNode(9);  
    head=insert(10,head);
    head=insert(11,head);
    head=insert(12,head);
    head=insert(12,head);
    head=insert(11,head);
    head=insert(10,head);
    head=insert(9,head);
    isPalindrome(head);
    return 0;
}