class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* first = head;
        ListNode* second = head;
        ListNode* temp = head;

        // Find kth node from start
        for(int i = 1; i < k; i++) {
            first = first->next;
        }

        temp = first;

        // Find kth node from end
        while(temp->next != NULL) {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);

        return head;
    }
};
