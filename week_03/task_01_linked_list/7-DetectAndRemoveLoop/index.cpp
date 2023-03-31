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
bool DetectLoop(ListNode* head){
    if(head == NULL){
        return false;
    }
    ListNode* fast = head ;
    ListNode* slow = head;
    while(fast!= NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            break;
        }
    }
    ListNode* temp = head;
    while(temp->next != slow->next){
        temp = temp->next;
        slow = slow->next;
    }
    slow->next = NULL;
    return false;
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
    head->next->next->next->next->next = head->next->next;
    DetectLoop(head);
    return 0;
}