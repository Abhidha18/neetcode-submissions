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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* fast=head;
        int m=0;
        while(m<n){
            fast=fast->next;
            m++;
        }
        if(fast==NULL)return head->next;
        ListNode* slow=head;
        ListNode* prev=NULL;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        } 
        slow->next=slow->next->next; 
        return head;      
    }
};
