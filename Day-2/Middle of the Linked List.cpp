class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* first=head;
        ListNode* sec=head;
        while(sec!=NULL&&sec->next!=NULL){
            first=first->next;
            sec=sec->next->next;
        }
        return first;
        
    }
};
