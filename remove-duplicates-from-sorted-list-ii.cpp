class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p=head;
        if(head==NULL)
        return head;
        map<int,int> m;
        while(p!=NULL)
        {
            m[p->val]++;
            p=p->next;
        }
        p=head;
        ListNode* prev=NULL;
        while(p!=NULL)
        {
            if(m[p->val]>1)
            {
                if(prev!=NULL)
                prev->next=p->next;
                else
                head=p->next;
            }
            else
            prev=p;
            p=p->next;
        }
        return head;
    }
};
