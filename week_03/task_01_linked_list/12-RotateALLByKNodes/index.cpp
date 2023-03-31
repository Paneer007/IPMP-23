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
void PrintLL(ListNode* head){
    auto temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" "<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
ListNode* RotateByKNodes(ListNode* head,int K){
    auto tempHead= head;
    auto temp=head;
    int i=0;
    for(int i=0;i<K-1;i++){
        temp=temp->next;
    }
    auto end = head;
    while(end->next!=NULL){
        end = end->next;
    }
    end->next = head;
    head=  temp->next;
    temp->next=NULL;
    return head;
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
    PrintLL(head);
    head = RotateByKNodes(head,3);
    PrintLL(head);
    return 0;
}