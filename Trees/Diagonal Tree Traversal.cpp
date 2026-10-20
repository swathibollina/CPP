class Solution {
  public:
    vector<int> diagonal(Node *root) {
        // code here
        deque<Node* > q;
        vector<int> ans;
        if(root==NULL)
        return ans;
        q.push_front(root);
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop_front();
            ans.push_back(temp->data);
            if(temp->right!=NULL)
            q.push_front(temp->right);
            if(temp->left!=NULL)
            q.push_back(temp->left);
        }
        return ans;
    }
};
