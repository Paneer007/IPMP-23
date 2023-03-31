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
ListNode* DeleteAltNodes(ListNode* head){
    ListNode* temp = head;
    while(head != NULL && head->next != NULL && head->next->next != NULL){
        head->next = head->next->next;
        head = head->next;
    }
    head =temp;
    return head;
}
void PrintLL(ListNode* head){
    auto temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" "<<endl;
        temp=temp->next;
    }
}
int main(){
    ListNode* head= new ListNode(9);  
    head=insert(10,head);
    head=insert(11,head);
    head=insert(12,head);
    head=insert(12,head);
    head=insert(11,head);
    head=insert(10,head);
    head=DeleteAltNodes(head);
    PrintLL(head);
    return 0;
}