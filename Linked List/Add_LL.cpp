#include<iostream>
using namespace std;

/*
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
9999999+9999 = 10009998
*/

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(ListNode* head){
    ListNode* p=head;
    while(p!=NULL){
        cout<<p->val<<' ';
        p=p->next;
    }
}

 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=NULL;
        //ListNode* temp=NULL;
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        while(l1!=NULL && l2!=NULL){
            int r=l1->val+l2->val+carry;
            ListNode* A=new ListNode(r%10);
            if(head==NULL){
                head=A;
            }
            temp->next=A;
            temp=temp->next;
            r>9?carry=1:carry=0;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int r=l1->val+carry;
            ListNode* A=new ListNode(r%10);
            temp->next=A;
            temp=temp->next;
            r>9?carry=1:carry=0;
            l1=l1->next;
        }
        while(l2!=NULL){
            int r=l2->val+carry;
            ListNode* A=new ListNode(r%10);
            temp->next=A;
            temp=temp->next;
            r>9?carry=1:carry=0;
            l2=l2->next;
        }
        if(carry){
            ListNode* A=new ListNode(1);
            temp->next=A;
        }
        return head;
    }
};

int main(){
    int l1[]={0};
    ListNode* head1=NULL;
    ListNode* A=new ListNode(l1[0]);
    head1=A;
    ListNode* p=head1;
    for(int i=1;i<1;i++){
        ListNode* t=new ListNode(l1[i]);
        p->next=t;
        p=p->next;
    }
    
    int l2[]={0};
    ListNode* head2=NULL;
    ListNode* B=new ListNode(l2[0]);
    head2=B;
    ListNode* q=head2;
    for(int i=1;i<1;i++){
        ListNode* t=new ListNode(l2[i]);
        q->next=t;
        q=q->next;
    }
    // print(head1);
    // cout<<endl;
    // print(head2);
    // cout<<endl;
    Solution obj;
    ListNode* res=obj.addTwoNumbers(head1,head2);
    print(res);
    return 0;
}