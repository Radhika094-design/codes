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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      if(headA==nullptr||headB==nullptr){
        return headA;
      }  
      ListNode* curr1 = headA;
      ListNode* curr2 = headB;
      while(curr1!=curr2){
        if(curr1==nullptr){
            curr1 = headB;
        }else{
        curr1= curr1->next;
        }
        if(curr2==nullptr){
            curr2 = headA;
        }else{
        curr2 = curr2->next;
      }
      }
      return curr1;
    }
};