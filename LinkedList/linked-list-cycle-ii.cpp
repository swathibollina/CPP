class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* p=head;
        if(head==NULL)
        return head;
        set<ListNode*> s;
        while(p!=NULL)
        {
            if(s.find(p)==s.end())
            s.insert(p);
            else
            return p;
            p=p->next;
        }
        return NULL;
    }
};
