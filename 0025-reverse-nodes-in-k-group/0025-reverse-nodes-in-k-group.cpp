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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroupEnd = &dummy;

        ListNode* slow = head;
        ListNode* fast = head;

        while (true) {
            // Move fast k steps ahead
            for (int i = 0; i < k; ++i) {
                if (!fast) return dummy.next; // Not enough nodes
                fast = fast->next;
            }

            // Reverse [slow, fast)
            ListNode* prev = fast;
            ListNode* curr = slow;
            while (curr != fast) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // Connect previous group to the new reversed group
            prevGroupEnd->next = prev;
            prevGroupEnd = slow;
            slow = fast;
        }

        return dummy.next;
    }
};
