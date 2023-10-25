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
           ListNode *front=curr->next;
           //reverse algo
           curr->next=prev;
           prev=curr;
           curr=front;
        }
        return prev;
    }
};
/*
 method -1 using stack implementation 
 method-2 using efficient code optimization
 
*/
