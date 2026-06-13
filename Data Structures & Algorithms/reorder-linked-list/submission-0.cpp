/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev=NULL;
        ListNode* curr=head;

        while(curr!=NULL){
            ListNode* newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;
        }
        return prev;
    }

    void reorderList(ListNode* head) {

        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* navin=reverseList(slow->next);
        slow->next=NULL;
        ListNode* temp=navin;
        ListNode* temp2=head;
        while(temp!=NULL && temp2!=NULL){
            ListNode*newnode2=temp2->next;
            ListNode*newnode=temp->next;
            temp2->next=temp;
            temp->next=newnode2;
            temp=newnode;
            temp2=newnode2;
        }
    }
};
