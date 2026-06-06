class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* t;
        ListNode* prev=NULL;
        while(head!=NULL)
        {
            t=head->next;
            head->next=prev;
            prev=head;
            head=t;
        }
        return prev;
    }
};
