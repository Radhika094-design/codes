/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow = slow->next;
            fast=fast->next->next;
            if(slow==fast){
            //    slow = head;//new linkedlist start here assume
             //   while(slow!=fast){
                while(slow!=head){
                    slow = slow->next;
                   // fast= fast->next;
                   head = head->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};