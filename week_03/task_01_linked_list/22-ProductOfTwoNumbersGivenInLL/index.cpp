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
long long int multiplyTwoNumber(ListNode* list1, ListNode* list2){
    long long N= 1000000007;
    long long num1 = 0, num2 = 0;
    while(list1!= NULL || list2!=NULL){
        if (list1){
            num1 = ((num1)*10)%N + list1->val;
            list1 = list1->next; 
        }
        if (list2){
             num2 = ((num2)*10)%N + list2->val;
            list2 = list2->next; 
        }
        cout<<((num1%N)*(num2%N))%N;
        return ((num1%N)*(num2%N))%N;
    }
}
int main(){
    ListNode* head= new ListNode(9);  
    head=insert(1,head);
    head=insert(2,head);

    ListNode* head2= new ListNode(9);  
    head2=insert(1,head2);
    head2=insert(2,head2);

    PrintLL(head2);

    multiplyTwoNumber(head,head2);

    return 0;
}