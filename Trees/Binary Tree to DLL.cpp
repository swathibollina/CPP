class Solution {
void inorder(Node* root,vector<Node* > &ans)
{
    if(root==NULL)
    return;
    inorder(root->left,ans);
    ans.push_back(root);
    inorder(root->right,ans);
}
  public:
    Node* bToDLL(Node* root) {
        // code here
        vector<Node* > ans;
        if(root==NULL)
        return root;
        inorder(root,ans);
        int n=ans.size();
        ans[0]->right=ans[1];
        for(int i=1;i<n-1;i++)
        {
            ans[i]->left=ans[i-1];
            ans[i]->right=ans[i+1];
        }
        ans[n-1]->left=ans[n-2];
        ans[n-1]->right=NULL;
        return ans[0];
    }
};
