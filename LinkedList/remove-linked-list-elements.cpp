class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        return head;
        while(head->val==val and head->next!=NULL)
        {
            head=head->next;
        }
        if(head->next==NULL)
        {
            if(head->val==val)
            return NULL;
            else
            return head;
        }
        ListNode* p=head;
        while(p->next!=NULL)
        {
            if(p->next->val==val)
            p->next=p->next->next;
            else
            p=p->next;
        }
        return head;
    }
};
