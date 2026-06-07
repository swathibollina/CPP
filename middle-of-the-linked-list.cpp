class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
        int n=0;
        if(head==NULL)
        return head;
        while(p!=NULL)
        {
            p=p->next;
            n++;
        }
        n/=2;
        p=head;
        for(int i=0;i<n;i++)
        {
            p=p->next;
        }
        return p;
    }
};
