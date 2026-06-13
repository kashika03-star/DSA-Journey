class Solution {
public:
    ListNode* reverse(ListNode* head ){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextnode;
        while(curr!=NULL){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secHalf=reverse(slow);
        ListNode* firstHalf=head;
        while(secHalf!=NULL){
        if(firstHalf->val!=secHalf->val){
            return false;}

        firstHalf=firstHalf->next;
        secHalf=secHalf->next;
        }
        return true;
    }
};
