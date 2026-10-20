class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        ListNode* tempNode=new ListNode(-1);
        ListNode* temp=tempNode;
        while(h1 && h2)
        {
            if(h1->val < h2->val)
            {
                temp->next=h1;
                h1=h1->next;
            }
            else
            {
                temp->next=h2;
                h2=h2->next;
            }
            temp=temp->next;
        }
        if(h1)
        temp->next=h1;
        else
        temp->next=h2;
        return tempNode->next;
    }
};
