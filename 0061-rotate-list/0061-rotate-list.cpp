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
    ListNode* rotateRight(ListNode* head, int k) {
       ListNode* slow = head;
       ListNode* fast = head;
       if(head==nullptr||head->next==nullptr||k == 0){
        return head;
       } 
       int length = 1;
       ListNode* curr = head;
       while(curr->next!=nullptr){
        curr = curr->next;
        length++;
       }
       k = k%length;
        if (k == 0) return head;
       for(int i = 0;i<k;i++){
        fast = fast->next;
       }
       while(fast->next!=nullptr){
        slow= slow->next;
        fast= fast->next;
       }
       ListNode* newhead = slow->next;
       slow->next = nullptr;
       fast->next = head;
       return newhead;
    }
};