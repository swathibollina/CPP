class Solution {

int balanced(TreeNode* root)
{
    if(root==NULL)
    return 0;
    return max(balanced(root->left),balanced(root->right))+1;
}
public:
    bool isBalanced(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL)
        return true;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(abs(balanced(temp->left)-balanced(temp->right))>1)
            return false;
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        }
        return true;
    }
};
