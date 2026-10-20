class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* h=head;
        int zc=0,oc=0,tc=0;
        while(h!=NULL)
        {
            if(h->data==0)
            zc++;
            if(h->data==1)
            oc++;
            if(h->data==2)
            tc++;
            h=h->next;
        }
        h=head;
        while(zc)
        {
            h->data=0;
            h=h->next;
            zc--;
        }
        while(oc)
        {
            h->data=1;
            h=h->next;
            oc--;
        }
        while(tc)
        {
            h->data=2;
            h=h->next;
            tc--;
        }
        return head;
    }
};
