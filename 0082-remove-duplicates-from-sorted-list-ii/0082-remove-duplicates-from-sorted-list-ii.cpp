class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        while (head) {
            if (head->next && head->val == head->next->val) {
                // Skip nodes with the same value
                while (head->next && head->val == head->next->val) {
                    head = head->next;
                }
                // Connect prev to the next unique node
                prev->next = head->next;
            } else {
                prev = prev->next;
            }
            head = head->next;
        }

        return dummy->next;
    }
};
