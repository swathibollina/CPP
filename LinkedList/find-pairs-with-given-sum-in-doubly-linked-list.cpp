class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int,int>> ans;
        Node* t=head;
        Node* first=head;
        Node* last;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        last=t;
        while(first!=NULL && last!=NULL && first->data < last->data)
        {
            int sum=first->data+last->data;
            if(sum>target)
            last=last->prev;
            else if(sum<target)
            first=first->next;
            else
            {
                ans.push_back({first->data,last->data});
                first=first->next;
                last=last->prev;
            }
        }
        return ans;
    }
};
