class Solution {
void inOrder(TreeNode* root, vector<TreeNode*> &ans)
{
    if(root==NULL)
    return;
    ans.push_back(root);
    inOrder(root->left,ans);
    inOrder(root->right,ans);
}
public:
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans;
        if(root==NULL)
        return;
        inOrder(root,ans);
        int n=ans.size();
        for(int i=0;i<n-1;i++)
        {
            ans[i]->right=ans[i+1];
            ans[i]->left=NULL;
        }
        ans[n-1]->left=NULL;
    }
};
