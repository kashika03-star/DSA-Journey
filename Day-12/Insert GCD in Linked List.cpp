class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* curr = head;

        while(curr != NULL && curr->next != NULL) {

            int gcd = __gcd(curr->val, curr->next->val);

            ListNode* newNode = new ListNode(gcd);

            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next;
        }

        return head;
    }
};
