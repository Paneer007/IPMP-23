#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* insert(int data, ListNode* head){
    ListNode* Temp = new ListNode(data);
    Temp->next = head->next;
    head->next = Temp;
}
void PrintLL(ListNode* head){
    auto temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return;
}

void SwapNthNode(int K, ListNode* head){
    ListNode* temp = head;
    for(int i=0;i<K;i++){
        temp=temp->next;
    }
    auto begin = temp;
    auto fast = temp;
    auto slow = head;
    while(fast->next != NULL){
        fast=fast->next;
        slow=slow->next;
    }
    int x = begin->val;
    begin->val = slow->val;
    slow->val=x; 
}
int main(){
    ListNode* head= new ListNode(0);  
    insert(10,head);
    insert(11,head);
    insert(12,head);
    insert(13,head);
    insert(14,head);
    insert(15,head);
    insert(16,head);
    insert(17,head);
    int K;
    cin>>K;
    SwapNthNode(K,head);
    PrintLL(head->next);
    return 0;
}