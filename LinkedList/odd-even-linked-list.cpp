class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd_tail=NULL;
        ListNode* even_tail=NULL;
        ListNode* odd_head=NULL;
        ListNode* even_head=NULL;
        ListNode* temp=head;
        int f=1;
        if(head==NULL || head->next==NULL)
        return head;
        while(temp!=NULL)
        {
            if(f%2)
            {
                if(odd_head==NULL)
                {
                    odd_head=temp;
                    odd_tail=temp;
                }
                else
                odd_tail->next=temp;
                odd_tail=temp;
                temp=temp->next;
                f=0;
            }
            else
            {
                if(even_head==NULL)
                {
                    even_head=temp;
                    even_tail=temp;
                }
                else
                even_tail->next=temp;
                even_tail=temp;
                temp=temp->next;
                f=1;
            }
        }
        odd_tail->next=even_head;
        even_tail->next=NULL;
        return odd_head;
    }
};
