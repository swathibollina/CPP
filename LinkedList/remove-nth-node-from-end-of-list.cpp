class Solution {
    int length(ListNode* head)
    {
        ListNode* h=head;
        if(h==NULL)
        return 0;
        int c=0;
        while(h!=NULL)
        {
            c++;
            h=h->next;
        }
        return c;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        if(head==NULL)
        return head;
        ListNode* h=head;
        ListNode* prev=NULL;
        int len=length(head);
        k=len-n;
        while(k>0)
        {
            prev=h;
            h=h->next;
            k--;
        }
        if(prev==NULL)
        head=h->next;
        else
        prev->next=h->next;
        return head;
    }
};
