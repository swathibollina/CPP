//Insert at the beginning
class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node* temp=new Node(x);
        temp->next=head;
        return temp;
    }
};

//Insert at the end
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp=new Node(x);
        if(head==NULL)
        return temp;
        Node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        return head;
    }
};


//Insert at a given position
class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node* temp=new Node(val);
        if(pos==1)
        {
            temp->next=head;
            return temp;
        }
        int c=1;
        Node *p=head;
        while(c<pos-1 and p->next!=NULL)
        {
            p=p->next;
            c++;
        }
        temp->next=p->next;
        p->next=temp;
        return head;
    }
};
