class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1=headA;
        ListNode* p2=headB;
        ListNode* ans=NULL;
        int n1=0,n2=0;
        while(p1!=NULL)
        {
            p1=p1->next;
            n1++;
        }
        while(p2!=NULL)
        {
            p2=p2->next;
            n2++;
        }
        p1=headA;
        p2=headB;
        int k=0;
        if(n1>n2)
        {
            k=n1-n2;
            for(int i=0;i<k;i++)
            {
                p1=p1->next;
            }
        }
        else
        {
            k=n2-n1;
            for(int i=0;i<k;i++)
            {
                p2=p2->next;
            }
        }
        while(p1!=NULL)
        {
            if(p1==p2)
            {
                ans=p1;
                return ans;
            }
            else
            {
                p1=p1->next;
                p2=p2->next;
            }
        }
        return ans;
    }
};
