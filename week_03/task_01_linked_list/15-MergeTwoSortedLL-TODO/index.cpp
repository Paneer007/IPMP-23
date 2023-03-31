// Linked List Template Code 
// Use this as base for Linked List Problems 
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

void MergeTwoLinkedList(ListNode* head1, ListNode* head2){

}
int main(){
    ListNode* head1= new ListNode(9);  
    head1=insert(10,head1);
    head1=insert(12,head1);
    head1=insert(14,head1);
    head1=insert(16,head1);
    head1=insert(18,head1);
    head1=insert(20,head1);
    head1=insert(22,head1);
    head1=insert(24,head1);

    ListNode* head2 = new ListNode(8);
    head2=insert(11,head2);
    head2=insert(13,head2);
    head2=insert(15,head2);
    head2=insert(17,head2);
    head2=insert(19,head2);
    head2=insert(21,head2);
    head2=insert(23,head2);

    MergeTwoLinkedList(head1,head2);

    return 0;
}