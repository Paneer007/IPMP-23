#include<bits/stdc++.h>
using namespace std;
int K=3;
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
void PrintLL(ListNode* head){
    auto temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" "<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
ListNode* reverseAltKNodes(ListNode* head, int K){
    if(!head){
        return head;
    }
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* next= NULL;
    int count =0;
    while(count<K && curr != NULL){
        next = curr->next ;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    count =0;
    while(count<K && next != NULL){
        next= next->next;
        count++;
    }
    if (!next){
        return prev;
    }
    head->next = reverseAltKNodes(next,K);
    return prev;
}
int main(){
    ListNode* head= new ListNode(9);  
    head=insert(10,head);
    head=insert(11,head);
    head=insert(12,head);
    head=insert(13,head);
    head=insert(14,head);
    head=insert(15,head);
    head=insert(16,head);
    head=insert(17,head);
    int k =3;
    head= reverseAltKNodes(head,k);
    PrintLL(head);
    return 0;
}