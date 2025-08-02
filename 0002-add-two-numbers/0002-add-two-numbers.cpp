class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // dummy head // when u dont know where your ll start take dummy node 
        ListNode* temp = dummy;            // pointer to form new list
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = 0;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
           

          ListNode* point = new ListNode(sum % 10);
            carry = sum / 10;
            temp->next = point;
            temp = temp->next;
        }

        return dummy->next;//return head
    }
};
