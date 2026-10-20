//Given the head of a linked list, rotate the list to the right by k places.
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p=head;
        if(head==NULL or k==0)
        return head;
        int c=1;
        while(p->next!=NULL)
        {
            p=p->next;
            c++;
        }
        p->next=head;
        k=k%c;
        int n=c-k-1;
        p=head;
        while(n--)
        {
            p=p->next;
        }
        head=p->next;
        p->next=NULL;
        return head;
    }
};
