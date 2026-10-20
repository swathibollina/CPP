//Delete given node without given position
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

//Delete node at position x
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x==1)
        {
            head=head->next;
            return head;
        }
        Node* p=head;
        int c=1;
        while(c<x-1 and p->next!=NULL)
        {
            p=p->next;
            c++;
        }
        p->next=p->next->next;
        return head;
        
    }
};

//Delete the middle node. For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* p=head;
        int n=1,i=0;
        while(p->next!=NULL)
        {
            p=p->next;
            n++;
        }
        p=head;
        int c=n/2;
        if(c==0)
        return NULL;
        while(i<c-1 and p->next!=NULL)
        {
            p=p->next;
            i++;
        }
        p->next=p->next->next;
        return head;
    }
};
