class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* p=head;
        if(head==NULL)
        return head;
        set<Node* > s;
        while(p!=NULL)
        {
            if(s.find(p)==s.end())
            s.insert(p);
            else
            return true;
            p=p->next;
        }
        return false;
    }
};
