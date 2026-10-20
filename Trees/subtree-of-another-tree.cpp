class Solution {
bool identical(TreeNode* root,TreeNode* subRoot)
{
    if(root==NULL and subRoot==NULL)
    return true;
    if((root==NULL and subRoot!=NULL) or(root!=NULL and subRoot==NULL))
    return false;
    if(root!=NULL and subRoot!=NULL)
    {
        if(root->val==subRoot->val)
        return identical(root->left,subRoot->left) and identical(root->right,subRoot->right);
        else 
        return false;
    }
    return true;
}
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q1;
        q1.push(root);
        while(!q1.empty())
        {
            TreeNode* temp=q1.front();
            q1.pop();
            if(temp->val==subRoot->val)
            {
               if(identical(temp,subRoot))
               return true;
            }
            if(temp->left!=NULL)
            q1.push(temp->left);
            if(temp->right!=NULL)
            q1.push(temp->right);
        }
        return false;
    }
};
