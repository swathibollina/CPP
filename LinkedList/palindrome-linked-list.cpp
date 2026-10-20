class Solution {
    int length(ListNode* head)
    {
        ListNode* h=head;
        int c=0;
        while(h!=NULL)
        {
            c++;
            h=h->next;
        }
        return c;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head;
        ListNode* prev=NULL;
        ListNode* next;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        int len=length(head);
        ListNode* h1=head;
        ListNode* h2=head;
        if(head->next==NULL)
        return true;
        if(len%2==0)
        {
            int l=len/2;
            while(l)
            {
                h2=h2->next;
                l--;
            }
            h2=reverse(h2);
        }
        else
        {
            int l=len/2+1;
            while(l)
            {
                h2=h2->next;
                l--;
            }
            h2=reverse(h2);
        }
        while(h2!=NULL)
        {
            if(h1->val!=h2->val)
            return false;
            h1=h1->next;
            h2=h2->next;
        }
        return true;
    }
};

/*
1 2 3 2 1 =5
1 2 3 1 2
1 2 2 1   =4
1 2 1 2
*/
