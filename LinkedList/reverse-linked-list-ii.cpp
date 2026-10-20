class Solution {
public:
    pair<ListNode*,ListNode*> rev(ListNode* l,ListNode* r)
    {
        ListNode* rhead=NULL;
        ListNode* rtail=NULL;
        ListNode* prev=NULL;
        ListNode* curr=l;
        ListNode* next;
        while(prev!=r)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        rhead=r;
        rtail=l;
        return {rhead,rtail};
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* t=head;
        if(head==NULL)
        return head;
        if(left==right)
        return head;
        ListNode* p=NULL;
        ListNode* n=NULL;
        ListNode* l=NULL;
        ListNode* r=NULL;
        // l and r are left andd right pointer of the LL which has to be reversed.
        //p and n are previou node and next nodes to the linked list.
        for(int i=1;i<right+2;i++)
        {
            if(i==left-1)
            p=t;
            if(i==left)
            l=t;
            if(i==right)
            r=t;
            if(i==right+1)
            n=t;
            if(t!=NULL)
            t=t->next;
        }
        pair<ListNode*,ListNode*> rll=rev(l,r);
        if(l==head)
        {
            rll.second->next=n;
            head=rll.first;
        }
        else
        {
            p->next=rll.first;
            rll.second->next=n;
        }
        return head;
    }
};
