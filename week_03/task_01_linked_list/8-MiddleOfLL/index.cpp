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

void MiddleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL && fast->next!= NULL&& fast->next->next!= NULL){
        fast = fast->next->next;
        slow=slow->next;
    }
    cout<<slow->val;
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
    MiddleNode(head);
    return 0;
}