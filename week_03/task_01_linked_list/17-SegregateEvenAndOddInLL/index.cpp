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
ListNode* EvenAndOddList(ListNode* head){
    if (!head || !(head->next)){
        return head;
    }
    ListNode* zeroD = new ListNode(0);
    ListNode* oneD = new ListNode(0);

    ListNode *zero= zeroD, *one = oneD;
    
    ListNode* curr = head;
    while( curr ){
        if (curr->val %2==0){
            zero->next = curr;
            zero= zero->next;
        }else if(curr->val%2 ==1){
            one->next = curr;
            one=one->next;
        }
        curr  = curr->next;
    }
    one->next=zeroD->next;

    head = oneD->next;
    return head;

}
int main(){
     ListNode* head= new ListNode(0);  
    head=insert(1,head);
    head=insert(2,head);
    head=insert(0,head);
    head=insert(1,head);
    head=insert(2,head);
    head=insert(0,head);
    head=insert(1,head);
    head=insert(2,head);
    head= EvenAndOddList(head);
    PrintLL(head);
    return 0;
}