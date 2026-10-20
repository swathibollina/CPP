class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node *temp;
        Node* p=NULL;
        Node* t=head;
        while(t!=NULL)
        {
            temp=t->next;
            t->next=p;
            p=t;
            p->prev=temp;
            t=temp;
        }
        return p;
    }
};v
