class Solution {
  public:
    Node* rev(Node* head)
    {
        Node* t;
        Node* prev=NULL;
        while(head!=NULL)
        {
            t=head->next;
            head->next=prev;
            prev=head;
            head=t;
        }
        return prev;
    }
    Node* addone(Node* head)
    {
        int carry=1,s=0;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL)
        {
            s=temp->data+carry;
            temp->data=s%10;
            carry=s/10;
            prev=temp;
            temp=temp->next;
        }
        if(carry!=0)
        prev->next=new Node(carry);
        return rev(head);
    }
    Node* addOne(Node* head) {
        // code here
        if(head==NULL)
        return head;
        Node* p=rev(head);
        return addone(p);
    }
};
