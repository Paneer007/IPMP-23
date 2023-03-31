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

ListNode* ReverseInGroupsOfK(ListNode* head,int k){
    if(!head){
        return head;
    }
    ListNode* current = head;
    ListNode* next = NULL;
    ListNode* prev =NULL;
    int count =0;

    while(count<k && current!=NULL){
        next = current->next;
        current->next=prev;
        prev=current;
        current = next;
        count++;
    }
    if(next != NULL){
        head->next = ReverseInGroupsOfK(next,k);
    }
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
    head= ReverseInGroupsOfK(head,k);
    PrintLL(head);
    return 0;
}