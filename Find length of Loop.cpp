class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* t=head;
        if(head==NULL)
        return 0;
        int i=1,ans=0;
        map<Node*,int> m;
        while(t!=NULL)
        {
            if(m.find(t)==m.end())
            m.insert({t,i++});
            else
            {
                ans=i-m[t];
                return ans;
            }
            t=t->next;
        }
        return 0;
    }
};
