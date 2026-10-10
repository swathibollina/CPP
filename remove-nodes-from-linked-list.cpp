class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> s;
        if(head==NULL)
        return head;
        ListNode* p=head;
        while(p!=NULL)
        {
            while(!s.empty() && s.top()->val < p->val)
            {
                s.pop();
            }
            s.push(p);
            p=p->next;
        }
        ListNode* prev=NULL;
        ListNode* temp;
        while(!s.empty())
        {
            temp=s.top();
            s.pop();
            temp->next=prev;
            prev=temp;
        }
        return prev;
    }
};
