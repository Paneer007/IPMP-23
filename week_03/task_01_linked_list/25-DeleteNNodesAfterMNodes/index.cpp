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

void RemoveNthNode(int N, ListNode* head){
    ListNode* temp = head;
    for(int i=0;i<N;i++){
        temp=temp->next;
    }
    auto fast = temp;
    auto slow = head;
    while(fast->next != NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next = slow->next->next;
}

void MoveByMNodesAndDeleteNNodes(int M, int N, ListNode* head){

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
    int N;
    cin>>N;
    int M;
    cin>>M;
    MoveByMNodesAndDeleteNNodes(M,N,head);
    PrintLL(head->next);
    return 0;
}