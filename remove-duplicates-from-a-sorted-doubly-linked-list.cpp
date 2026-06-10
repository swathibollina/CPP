class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        Node* p=headRef;
        if(headRef==NULL)
        return headRef;
        Node* t;
        while(p->next!=NULL)
        {
            if(p->data==p->next->data)
            {
                t=p->next;
                p->next=p->next->next;
                t->prev=p;
            }
            else
            p=p->next;
        }
        return headRef;
    }
};
