class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int s=0;
            if(l1!=NULL)
            {
                s+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                s+=l2->val;
                l2=l2->next;
            }
            s+=carry;
            carry=s/10;
            temp->next=new ListNode(s%10);
            temp=temp->next;
        }
        return ans->next;
    }
};
