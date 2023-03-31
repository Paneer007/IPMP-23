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
ListNode* addTwoNumber(ListNode* list1, ListNode* list2){
    int carry =0;
    ListNode* list3 = new ListNode(0);
    ListNode* temp = list3;
    while(list1!= NULL || list2!=NULL){
        int sum =0;
        if (list1!=NULL){
            sum+=list1->val;
            list1=list1->next;
        }
        if (list2!=NULL){
            sum+=list2->val;
            list2=list2->next;
        }
        sum+=carry;
        carry = sum/10;
        sum=sum%10;
        ListNode* Node = new ListNode(sum);
        temp->next = Node;
        temp=temp->next;
    }
    return list3->next;
}
int main(){
    ListNode* head= new ListNode(9);  
    head=insert(1,head);
    head=insert(2,head);
    head=insert(2,head);
    head=insert(3,head);
    head=insert(4,head);
    head=insert(5,head);
    head=insert(6,head);
    head=insert(7,head);

    ListNode* head2= new ListNode(9);  
    head2=insert(1,head2);
    head2=insert(2,head2);
    head2=insert(2,head2);
    head2=insert(3,head2);
    head2=insert(4,head2);
    head2=insert(5,head2);
    head2=insert(6,head2);
    head2=insert(7,head2);

    PrintLL(head2);

    ListNode* finalHead = addTwoNumber(head,head2);

    PrintLL(finalHead);
    return 0;
}