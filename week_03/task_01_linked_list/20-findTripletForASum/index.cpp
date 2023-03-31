#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    char val;
    ListNode *next;
    ListNode(char x) : val(x), next(NULL) {}
};
ListNode* insert(char data, ListNode* head){
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

bool isVowel(char a){
    switch(a){
        case 'a':
            return true;
        case 'e':
            return true;
        case 'i':
            return true;
        case 'o':
            return true;
        case 'u':
            return true;
    }
    return false;
}
void EvenAndOddList(ListNode* head){
    if (!head || !(head->next)){
        return;
    }
    ListNode* vowelD = new ListNode(0);
    ListNode* consonantD = new ListNode(0);

    ListNode *vowel= vowelD, *consonant = consonantD;
    
    ListNode* curr = head;
    while( curr ){
        if (isVowel(curr->val)){
            vowel->next = curr;
            vowel = vowel->next;
        }else{
            consonant->next = curr;
            consonant= consonant->next;
        }
        curr  = curr->next;
    }
    //List one
    PrintLL(consonantD);
    PrintLL(vowelD);
}

void TripletSum(ListNode* head1, ListNode* head2, ListNode* head3,int psum){
    ListNode* head1Temp=head1;
    while(head1Temp!=NULL){
        int nsum = psum - head1Temp->val;
        cout<<nsum<<endl;
        cout<<head1Temp->val<<endl;
        ListNode* head2Temp=head2;
        while(head2Temp != NULL){
            int msum = nsum - head2Temp->val;
            ListNode* head3Temp=head3;
             while(head3Temp != NULL){
                int osum = msum - head3Temp->val;
                if(osum==0){
                    cout<<head1Temp->val<<" "<<head2Temp->val<<" "<<head3Temp->val<<endl;
                    cout<<"Triplet found"<<endl;
                    return;
                }
                head3Temp=head3Temp->next;
            }
            head2Temp=head2Temp->next;
        }
        head1Temp=head1Temp->next;
    }
}
int main(){
    ListNode* head1= new ListNode(9);  
    head1=insert(10,head1);
    head1=insert(11,head1);
    head1=insert(12,head1);
    head1=insert(13,head1);
    head1=insert(14,head1);
    head1=insert(15,head1);
    head1=insert(16,head1);
    head1=insert(17,head1);

    ListNode* head2= new ListNode(9);  
    head2=insert(10,head2);
    head2=insert(11,head2);
    head2=insert(12,head2);
    head2=insert(13,head2);
    head2=insert(14,head2);
    head2=insert(15,head2);
    head2=insert(16,head2);
    head2=insert(17,head2);

    ListNode* head3= new ListNode(9);  
    head3=insert(10,head3);
    head3=insert(11,head3);
    head3=insert(12,head3);
    head3=insert(13,head3);
    head3=insert(14,head3);
    head3=insert(15,head3);
    head3=insert(16,head3);
    head3=insert(17,head3);

    TripletSum(head1,head2,head3,33);

    //EvenAndOddList(head);
    return 0;
}