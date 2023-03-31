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

ListNode* getUnion(ListNode* head1, ListNode* head2){
    ListNode* ans = new ListNode(-1);
    ListNode* head= ans;
    set<int>st;
    while(head1 != NULL){
        st.insert(head1->val);
        head1 = head1->next;
    }
    while (head2 != NULL) {
        st.insert(head2->val);
        head2 = head2->next;
    }
    for (auto it : st) {
        ListNode* t = new ListNode(it);
        ans->next = t;
        ans = ans->next;
    }
    return head->next;
}

ListNode* getIntersection(ListNode* head1, ListNode* head2){
    ListNode* t1 = head1;
    ListNode* result = NULL;
    set<int>st;
    return t1;
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


    ListNode* headTwo= new ListNode(9+3);  
    headTwo=insert(10+3,headTwo);
    headTwo=insert(11+3,headTwo);
    headTwo=insert(12+3,headTwo);
    headTwo=insert(13+3,headTwo);
    headTwo=insert(14+3,headTwo);
    headTwo=insert(15+3,headTwo);
    headTwo=insert(16+3,headTwo);
    headTwo=insert(17+3,headTwo);

    ListNode* getUnionLL=getUnion(head,headTwo);
    while(getUnionLL!=NULL){
        cout<<getUnionLL->val<<" ";
        getUnionLL=getUnionLL->next;
    }

    return 0;
}