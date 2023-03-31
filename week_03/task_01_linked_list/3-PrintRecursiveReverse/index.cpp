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
void PrintReverseRecurseLL(ListNode* head){
    if(head==NULL){
        return;
    }else{
        PrintReverseRecurseLL(head->next);
        cout<<head->val<<endl;
    }
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
    PrintReverseRecurseLL(head);
    return 0;
}